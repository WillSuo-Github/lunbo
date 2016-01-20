//
//  LYKCarouselViewController.m
//  lunbo
//
//  Created by ws on 16/1/11.
//  Copyright © 2016年 ws. All rights reserved.
//

#import "LYKCarouselViewController.h"
#import "LYKCarouselViewCell.h"

@interface LYKCarouselViewController ()<UICollectionViewDelegate,UICollectionViewDataSource>{
    
    NSInteger _showingIndex;
    UICollectionView *_collection;
}

@end

@implementation LYKCarouselViewController

- (void)viewDidLoad{
    
    [super viewDidLoad];
  
    [self setUpCollectionView];
}

- (void)setUpCollectionView{
    
    UICollectionViewFlowLayout *layout = [[UICollectionViewFlowLayout alloc] init];
    [layout setScrollDirection:UICollectionViewScrollDirectionHorizontal];
    [layout setItemSize:self.view.bounds.size];
    [layout setMinimumInteritemSpacing:0];
    [layout setMinimumLineSpacing:0];
    
    UICollectionView *collectionView = [[UICollectionView alloc] initWithFrame:self.view.bounds collectionViewLayout:layout];
    _collection = collectionView;
    collectionView.pagingEnabled = YES;
    collectionView.delegate = self;
    collectionView.dataSource = self;
    [collectionView registerClass:[LYKCarouselViewCell class] forCellWithReuseIdentifier:@"cell"];
    
    _showingIndex = 0;
    NSIndexPath *indexPath = [NSIndexPath indexPathForItem:1 inSection:0];
    [collectionView scrollToItemAtIndexPath:indexPath atScrollPosition:UICollectionViewScrollPositionCenteredHorizontally animated:YES];
    
    [self.view addSubview:collectionView];
}

#pragma mark - collectionView的数据源和代理方法
- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section{
    
    return self.imageUrlArr.count;
}

- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath{
    
    LYKCarouselViewCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:@"cell" forIndexPath:indexPath];
    
    NSInteger realIndex = (indexPath.row - 1 + _showingIndex + self.imageUrlArr.count) % self.imageUrlArr.count;
    NSLog(@"即将显示的：%ld",realIndex);
    NSIndexPath *index = [NSIndexPath indexPathForItem:realIndex inSection:0];
    cell.imageUrlStr = self.imageUrlArr[index.row];
    
    
    return cell;
}


- (void)scrollViewDidEndDragging:(UIScrollView *)scrollView willDecelerate:(BOOL)decelerate{
    
    int page = scrollView.contentOffset.x / self.view.frame.size.width;
    NSLog(@"拖动到的界面：%d",page);
    
    if ((scrollView.contentOffset.x - page * self.view.frame.size.width) < self.view.frame.size.width / 2) {
        
        NSIndexPath *indexPath = [NSIndexPath indexPathForItem:page inSection:0];
        [_collection scrollToItemAtIndexPath:indexPath atScrollPosition:UICollectionViewScrollPositionCenteredHorizontally animated:YES];
    }
//    if (page == 0) {
//        _showingIndex += 1;
//    }
    
    
}

- (void)scrollViewDidEndDecelerating:(UIScrollView *)scrollView{
    
    int page = scrollView.contentOffset.x / self.view.frame.size.width;
    NSLog(@"当前界面：%d",page);
    _showingIndex = (_showingIndex - 1 + page + self.imageUrlArr.count) % self.imageUrlArr.count;
    NSIndexPath *indexPath = [NSIndexPath indexPathForItem:1 inSection:0];
    [_collection scrollToItemAtIndexPath:indexPath atScrollPosition:UICollectionViewScrollPositionCenteredHorizontally animated:NO];
}


@end
