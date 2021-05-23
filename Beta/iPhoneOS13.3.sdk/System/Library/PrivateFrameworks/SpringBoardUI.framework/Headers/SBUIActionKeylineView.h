/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIKit/UIView.h>

@class MTVisualStylingProvider;

@interface SBUIActionKeylineView : UIView

{
    MTVisualStylingProvider *_visualStylingProvider;
    double _height;
}

@property (nonatomic) double height;

- (id)init;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (void)_updateVisualStylingIfNecessary;
- (void)_invalidateVisualStyling;
- (void)_updateCornerMask;
- (double)heightInPixels;

@end
