/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKEffectPickerView.h>

@interface CKEffectPickerLargeTextView : CKEffectPickerView

{
    _Bool _finishedInitializing;
}

@property (nonatomic) _Bool finishedInitializing;

- (void)setCloseButtonYPosition:(double)arg1;
- (void)activateTextSizeDependentConstraintsForSendButtonFrame:(struct CGRect)arg1;
- (double)marginBetweenPickerDotButtons;
- (struct CGRect)_updateBalloonViewOrigin:(struct CGRect)arg1 forButtonFrame:(struct CGRect)arg2;
- (void)_updateRoundedContainerView;
- (double)offsetYForLabelAtIndex:(long long)arg1 withInitialY:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1 sendButtonFrame:(struct CGRect)arg2 balloonViewOrigin:(struct CGPoint)arg3 composition:(id)arg4 color:(BOOL)arg5;
- (void)addEffect:(id)arg1 withDescriptiveText:(id)arg2 withIdentifier:(id)arg3;
- (void)cancelImpactSelection;
- (void)_touchUpInsideDotButton:(id)arg1;
- (void)effectTypeDidChange:(id)arg1;
- (_Bool)shouldAnimatePreviousLabelForCancel:(id)arg1;

@end
