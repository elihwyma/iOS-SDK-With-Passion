/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <SpeechRecognitionCommandAndControl/CACSimpleContentViewManager.h>

@interface CACElementActionsPresentationManager : CACSimpleContentViewManager

+ (_Bool)canShowElementActionsForElement:(id)arg1;

- (_Bool)isOverlay;
- (void)showElementActionsForElement:(id)arg1 usingPortraitUpRect:(struct CGRect)arg2;
- (void)elementActionsPresentationViewController:(id)arg1 hideWithCompletion:(CDUnknownBlockType)arg2;

@end
