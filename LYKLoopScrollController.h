//
//  LYKCarouseScrollController.h
//  lunbo
//
//  Created by ws on 16/1/12.
//  Copyright © 2016年 ws. All rights reserved.
//


//***************************************************

    //警告：由于使用到获取网络图片所以对SDWebImage强依赖

//***************************************************

#import <UIKit/UIKit.h>
@class LYKLoopScrollController;
@protocol LYKLoopScrollControllerDataSouce <NSObject>

@required

/**
 *  数据源方法
 *
 *  @param viewController 自身的控制器
 *
 *  @return 返回image的url，为NSString格式
 */
- (NSArray *)LYKLoopScrollControllerForImageUrl:(LYKLoopScrollController *)viewController;

/**
 *  数据源方法
 *
 *  @param viewController 自身的控制器
 *
 *  @return 返回image的Title，为NSString格式
 */
- (NSArray *)LYKLoopScrollControllerForImageTitle:(LYKLoopScrollController *)viewController;

/**
 *  数据源方法
 *
 *  @param viewController 自身的控制器
 *
 *  @return 一个等待的image
 */
- (UIImage *)LYKLoopScrollControllerForPlaceHoderImage:(LYKLoopScrollController *)viewController;

@end

@protocol LYKLoopScrollControllerDelegate <NSObject>

@optional
/**
 *  被点击的代理方法
 *
 *  @param viewController 自身的控制器
 *  @param index          被点击的index
 */
- (void)LYKLoopScrollControllerDidChick:(LYKLoopScrollController *)viewController index:(NSInteger)index;

@end

@interface LYKLoopScrollController : UIViewController

@property (nonatomic, weak) id<LYKLoopScrollControllerDataSouce> dataSouce;
@property (nonatomic, weak) id<LYKLoopScrollControllerDelegate> delegate;

/**
 *  title的字体大小
 */
@property (nonatomic, assign) NSInteger titleLabelFont;

- (void)reloadData;
@end
