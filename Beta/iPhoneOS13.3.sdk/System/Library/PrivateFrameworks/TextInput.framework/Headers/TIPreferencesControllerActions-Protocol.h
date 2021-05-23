/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/Swift-Protocol.h>

@class MISSING_TYPE, NSArray;

@protocol TIPreferencesControllerActions <Swift>

@property (copy, nonatomic) NSArray *inputModeSelectionSequence;
@property (nonatomic) _Bool predictionEnabled;
@property (nonatomic) _Bool automaticMinimizationEnabled;
@property (nonatomic) _Bool keyboardShownByTouch;
@property (nonatomic) struct CGPoint keyboardPosition;
@property (nonatomic) struct CGPoint floatingKeyboardPosition;
@property (nonatomic) unsigned long long floatingKeyboardDockedEdge;

- (MISSING_TYPE *)didTriggerOneTimeAction: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)oneTimeActionCompleted: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)updateLastUsedInputMode: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)updateEnabledDictationLanguages: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)updateLastUsedLayout: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)updateLastUsedKeyboards: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)updateEnableProKeyboard: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)updateKeyboardHandBias: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)updateDidPerformFirstReachableKeyboardInteraction;
- (MISSING_TYPE *)updateLastUsedDictationLanguages: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)updateKeyboardIsSplit:locked: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)updateKeyboardIsFloating: /* Error: Ran out of types for this method. */;

@end
