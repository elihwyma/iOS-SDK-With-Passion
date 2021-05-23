/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSArray;

@protocol TIPreferencesControllerActions <Swift>

@property (copy, nonatomic) NSArray *inputModeSelectionSequence;
@property (nonatomic) _Bool predictionEnabled;
@property (nonatomic) _Bool automaticMinimizationEnabled;
@property (nonatomic) _Bool keyboardShownByTouch;
@property (nonatomic) struct CGPoint keyboardPosition;
@property (nonatomic) struct CGPoint floatingKeyboardPosition;
@property (nonatomic) unsigned long long floatingKeyboardDockedEdge;

- (unsigned short)didTriggerOneTimeAction: /* Error: Ran out of types for this method. */;
- (unsigned short)oneTimeActionCompleted: /* Error: Ran out of types for this method. */;
- (unsigned short)updateLastUsedInputMode: /* Error: Ran out of types for this method. */;
- (unsigned short)updateEnabledDictationLanguages: /* Error: Ran out of types for this method. */;
- (unsigned short)updateLastUsedLayout: /* Error: Ran out of types for this method. */;
- (unsigned short)updateLastUsedKeyboards: /* Error: Ran out of types for this method. */;
- (unsigned short)updateEnableProKeyboard: /* Error: Ran out of types for this method. */;
- (unsigned short)updateKeyboardHandBias: /* Error: Ran out of types for this method. */;
- (unsigned short)updateDidPerformFirstReachableKeyboardInteraction;
- (unsigned short)updateLastUsedDictationLanguages: /* Error: Ran out of types for this method. */;
- (unsigned short)updateKeyboardIsSplit:locked: /* Error: Ran out of types for this method. */;
- (unsigned short)updateKeyboardIsFloating: /* Error: Ran out of types for this method. */;

@end
