/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIKeyboardUsageTracking : NSObject

+ (void)keyboardExtensionsOnDevice;
+ (void)keyboardExtensionCrashed;
+ (void)keyboardSetToInputMode:(id)arg1 fromPrevious:(id)arg2;
+ (void)keyboardSupportsTouch:(_Bool)arg1;
+ (void)showVariantsIncrement;
+ (void)variantDeleteIncrement;
+ (void)letterCaseToggleIncrement;
+ (void)showCharacterPreviewPreference:(_Bool)arg1;
+ (void)panAlternateKeyFlickDownCount;
+ (void)dualStringsKeyFlickUpCount;
+ (void)singleStringKeyFlickUpCount;
+ (void)keyboardReachabilityDistribution:(double)arg1;
+ (void)countReachableKeyboardHandBiasChangeToBias:(long long)arg1;
+ (void)countKeystrokeForReachableKeyboardWithBias:(long long)arg1;
+ (void)normalPunctuationKeyCount;
+ (void)undoKeyCount;
+ (void)redoKeyCount;
+ (void)keyboardTotalOnScreenTime:(double)arg1 orientation:(long long)arg2;
+ (void)appAutofillDetectedIncrement;
+ (void)showLowercaseKeyplanePreference:(_Bool)arg1;
+ (void)keyboardExtensionPrimaryLanguageChanged;
+ (void)appAutofillDetectedDecrement;
+ (void)appAutofillFilled;
+ (void)loginPasswordFromKeyboardIncrement;
+ (void)signupPasswordFromKeyboardIncrement;
+ (void)loginPasswordFromAutofillIncrement;
+ (void)signupPasswordFromAutofillIncrement;
+ (void)appAutofillExtraKeyTapped;
+ (void)appAutofillCredentialFromSafariUI;
+ (void)keyboardPerformanceFromTouchStart:(double)arg1 until:(double)arg2;
+ (void)keyboardPerformanceFromTouchRelease:(double)arg1 until:(double)arg2;
+ (void)predictionViewState:(_Bool)arg1 forInputMode:(id)arg2;
+ (void)inputSwitcherSetPredictionPreference:(_Bool)arg1;
+ (void)keyboardGestureSetPredictionPreference:(_Bool)arg1;
+ (void)keyboardGestureSelectedPredictiveInputCandidate;
+ (void)selectedPredictiveInputCandidate:(id)arg1 isAutocorrection:(_Bool)arg2 index:(unsigned long long)arg3;
+ (void)keyboardGestureTwoFingerTap:(_Bool)arg1 withTapCount:(int)arg2;
+ (void)keyboardGestureOneFingerForcePan:(_Bool)arg1;
+ (void)keyboardGestureOneFingerForcePress:(_Bool)arg1 withPressCount:(int)arg2;
+ (void)restAndTypeTriggered;

@end
