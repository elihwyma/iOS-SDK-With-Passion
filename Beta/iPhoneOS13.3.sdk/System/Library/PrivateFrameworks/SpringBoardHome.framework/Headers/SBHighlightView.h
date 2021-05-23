/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <UIKit/UIView.h>

@class UIImageView;

@interface SBHighlightView : UIView

{
    UIImageView *_highlight;
    double _highlightAlpha;
    double _highlightHeight;
}

@property (nonatomic, readonly) double highlightAlpha;
@property (nonatomic, readonly) double highlightHeight;

+ (id)imageCache;
+ (id)_highlightImageWithHeight:(double)arg1 alpha:(double)arg2;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 highlightAlpha:(double)arg2 highlightHeight:(double)arg3;

@end
