/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class NSNumber, PUFilmstripView;

__attribute__((visibility("hidden")))
@interface PUFilmstripWrapperView : UIView

{
    _Bool _isAnimating;
    _Bool _isExpanded;
    PUFilmstripView *_filmstripView;
    NSNumber *_anchoredLeft;
    struct CGSize _expandedSize;
    struct CGRect _visibleRect;
}

@property (nonatomic, setter=setAnimating:) _Bool isAnimating;
@property (nonatomic) struct CGRect visibleRect;
@property (retain, nonatomic) PUFilmstripView *filmstripView;
@property (nonatomic, setter=setExpanded:) _Bool isExpanded;
@property (nonatomic, setter=setExpandedSize:) struct CGSize expandedSize;
@property (copy, nonatomic) NSNumber *anchoredLeft;

- (void)layoutSubviews;

@end
