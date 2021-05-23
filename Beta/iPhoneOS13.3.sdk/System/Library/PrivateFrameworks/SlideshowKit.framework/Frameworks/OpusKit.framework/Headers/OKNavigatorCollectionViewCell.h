/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <UIKit/UICollectionViewCell.h>

@class OKPageViewController;

@interface OKNavigatorCollectionViewCell : UICollectionViewCell

{
    OKPageViewController *_pageViewController;
}

@property (retain, nonatomic) OKPageViewController *pageViewController;

- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
