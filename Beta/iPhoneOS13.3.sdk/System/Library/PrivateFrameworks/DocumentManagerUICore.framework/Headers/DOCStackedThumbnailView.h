/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <UIKit/UIView.h>

@class NSArray;

@interface DOCStackedThumbnailView : UIView

{
    NSArray *_items;
    NSArray *_URLs;
    NSArray *_thumbnailImageViews;
    struct CGSize _topThumbnailSize;
}

@property (retain, nonatomic) NSArray *thumbnailImageViews;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSArray *URLs;
@property (nonatomic) struct CGSize topThumbnailSize;

- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (void)updateItems;
- (void)updateURLs;
- (void)createThumbnailViewsWithCount:(unsigned long long)arg1 createViewForIndex:(CDUnknownBlockType)arg2;
- (id)initWithTopThumbnailSize:(struct CGSize)arg1;

@end
