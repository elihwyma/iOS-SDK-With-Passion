/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKEffectPickerView.h>

@interface CKEffectPickerStandardView : CKEffectPickerView

- (void)setCloseButtonYPosition:(double)arg1;
- (void)activateTextSizeDependentConstraintsForSendButtonFrame:(struct CGRect)arg1;
- (double)marginBetweenPickerDotButtons;
- (struct CGRect)_updateBalloonViewOrigin:(struct CGRect)arg1 forButtonFrame:(struct CGRect)arg2;
- (void)_updateRoundedContainerView;
- (double)offsetYForLabelAtIndex:(long long)arg1 withInitialY:(double)arg2;

@end
