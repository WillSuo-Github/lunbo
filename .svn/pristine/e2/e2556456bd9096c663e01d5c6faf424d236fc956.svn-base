//
//  ViewController.m
//  lunbo
//
//  Created by ws on 16/1/11.
//  Copyright © 2016年 ws. All rights reserved.
//

#import "ViewController.h"
#import "LYKLoopScrollController.h"

@interface ViewController ()<LYKLoopScrollControllerDataSouce,LYKLoopScrollControllerDelegate>{
    
    LYKLoopScrollController *_carouselVc;
}

@end

@implementation ViewController

- (void)viewDidLoad{
    
    [super viewDidLoad];
    
    
    
    
    
    LYKLoopScrollController *carouselVc = [[LYKLoopScrollController alloc] init];
    [self.view addSubview:carouselVc.view];
    _carouselVc = carouselVc;
    carouselVc.dataSouce = self;
    carouselVc.delegate = self;
    carouselVc.view.frame = self.view.bounds;
//    carouselVc.view.frame = CGRectMake(0, 0, self.view.frame.size.width, 121);
    carouselVc.titleLabelFont = 13;
    
    [carouselVc reloadData];

}

#pragma mark - LYKLoopScrollControllerDataSouce
- (NSArray *)LYKLoopScrollControllerForImageUrl:(LYKLoopScrollController *)viewController{
    
    NSMutableArray *arr = [NSMutableArray array];
    for (int i = 1; i < 6; ++i) {
//        NSString *file = [NSString stringWithFormat:@"%d.jpg",i];
        //        NSURL *url = [NSURL fileURLWithPath:filePath];
        NSString *file = @"http://a.hiphotos.baidu.com/image/h%3D200/sign=febfa19b4ded2e73e3e9812cb700a16d/f7246b600c338744233d6163560fd9f9d72aa031.jpg";
        [arr addObject:file];
    }
    
    return arr;
}

- (UIImage *)LYKLoopScrollControllerForPlaceHoderImage:(LYKLoopScrollController *)viewController{
    
    return [UIImage imageNamed:@"1"];
}

- (NSArray *)LYKLoopScrollControllerForImageTitle:(LYKLoopScrollController *)viewController{
    
    NSMutableArray *arr = [NSMutableArray array];
    for (int i = 1; i < 6; ++i) {
        NSString *file = [NSString stringWithFormat:@"%d",i];
        //        NSURL *url = [NSURL fileURLWithPath:filePath];
        [arr addObject:file];
    }
    
    return arr;
}

#pragma mark - LYKLoopScrollControllerDelegate
- (void)LYKLoopScrollControllerDidChick:(LYKLoopScrollController *)viewController index:(NSInteger)index{
    
    NSLog(@"点击了第%ld张图片",index);
}

@end
