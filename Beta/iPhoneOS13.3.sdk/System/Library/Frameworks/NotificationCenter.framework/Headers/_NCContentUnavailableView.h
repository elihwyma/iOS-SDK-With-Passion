/*
 Image: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
 */

#import <UIKit/_UIContentUnavailableView.h>

__attribute__((visibility("hidden")))
@interface _NCContentUnavailableView : _UIContentUnavailableView

- (id)_titleFont;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (double)_labelAlpha;
- (void)_updateVisualStyling;
- (id)_visualStylingProvider;

@end
