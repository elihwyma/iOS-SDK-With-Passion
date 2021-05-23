/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UISearchBar.h>

@class GKCollectionViewDataSource;

@interface GKSearchBar : UISearchBar

{
    GKCollectionViewDataSource *_dataSource;
    long long _sectionIndex;
}

@property (retain, nonatomic) GKCollectionViewDataSource *dataSource;
@property (nonatomic) long long sectionIndex;

- (void)dealloc;

@end
