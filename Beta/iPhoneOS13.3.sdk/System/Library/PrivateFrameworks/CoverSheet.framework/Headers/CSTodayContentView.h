/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSCoverSheetViewBase.h>

@class UIView;

@interface CSTodayContentView : CSCoverSheetViewBase

{
    _Bool _bouncing;
    UIView *_navigationView;
    UIView *_todayView;
}

@property (weak, nonatomic) UIView *navigationView;
@property (weak, nonatomic) UIView *todayView;
@property (nonatomic, getter=isBouncing) _Bool bouncing;

- (void)layoutSubviews;
- (void)_adjustContentForEdgeBounce;
- (void)_resetContentAfterEdgeBounce;

@end
