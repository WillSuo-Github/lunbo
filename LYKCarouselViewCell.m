//
//  LYKCarouselViewCell.m
//  lunbo
//
//  Created by ws on 16/1/11.
//  Copyright © 2016年 ws. All rights reserved.
//

#import "LYKCarouselViewCell.h"

@interface LYKCarouselViewCell (){
    
    UIImageView *_imageV;
}



@end


@implementation LYKCarouselViewCell


- (instancetype)initWithFrame:(CGRect)frame{
    
    if (self = [super initWithFrame:frame]) {
        [self setUpSubViews];
    }
    return self;
}


- (void)setUpSubViews{
    
    UIImageView *imageV = [[UIImageView alloc] initWithFrame:self.bounds];
    _imageV = imageV;
    
    [self addSubview:imageV];
}

- (void)setImageUrlStr:(NSString *)imageUrlStr{
    
    _imageUrlStr = imageUrlStr;
    
//    NSLog(@"%@",imageUrlStr);
    [_imageV setImage:[UIImage imageNamed:imageUrlStr]];
}


@end
