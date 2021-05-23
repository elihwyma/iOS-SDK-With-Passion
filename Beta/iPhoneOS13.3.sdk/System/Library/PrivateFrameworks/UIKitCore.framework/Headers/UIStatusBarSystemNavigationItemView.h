/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStatusBarItemView.h>

@class NSString, UIButton;

__attribute__((visibility("hidden")))
@interface UIStatusBarSystemNavigationItemView : UIStatusBarItemView

{
    int _currentLabelCompressionLevel;
    UIButton *_button;
    double _maxWidth;
}

@property (retain, nonatomic) UIButton *button;
@property (nonatomic) double maxWidth;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) int currentLabelCompressionLevel;

- (id)accessibilityHUDRepresentation;
- (double)updateContentsAndWidth;
- (double)extraRightPadding;
- (double)extraLeftPadding;
- (id)shortenedTitleWithCompressionLevel:(int)arg1;
- (long long)labelLineBreakMode;
- (void)userDidActivateButton:(id)arg1;
- (double)resetContentOverlap;
- (double)addContentOverlap:(double)arg1;
- (_Bool)layoutImageOnTrailingEdge;
- (_Bool)_shouldLayoutImageOnRight;
- (struct CGSize)_buttonSize;

@end
