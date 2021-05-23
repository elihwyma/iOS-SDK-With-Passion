/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKeyboardCandidateViewConfigurationPhoneBar.h>

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateViewConfigurationPadBar : UIKeyboardCandidateViewConfigurationPhoneBar

- (id)initialState;
- (id)extendedState;
- (id)extendedScrolledState;
- (_Bool)shouldAlwaysShowSortControl;
- (id)arrowButtonSeparatorImage;
- (unsigned long long)rowsToExtend;
- (_Bool)shouldResizeKeyboardBackdrop;
- (double)candidateDefaultFontSize;
- (id)edgeSeparatorImage;

@end
