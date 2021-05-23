/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/TIKeyboardInputManager.h>

@interface TIKeyboardInputManager_mul : TIKeyboardInputManager

{
    _Bool _isSuspended;
}

- (void)resume;
- (void)suspend;
- (id)keyboardConfiguration;
- (_Bool)updateLanguageModelForKeyboardState;
- (void)enumerateInputModesWithBlock:(CDUnknownBlockType)arg1;
- (unsigned int)lexiconIDForInputMode:(id)arg1;
- (float)weightForInputMode:(id)arg1;
- (CDStruct_69b8fb94)lexiconInfoForInputMode:(id)arg1;
- (vector_4dc11a9b)lexiconInformationVector;
- (struct LanguageModelContainer *)languageModelContainer;
- (_Bool)shouldUpdateDictionary;
- (void)loadDictionaries;
- (void)didUpdateInputModes:(id)arg1;
- (void)didUpdateInputModeProbabilities:(id)arg1;
- (void)updateLanguagePriors;
- (id)resourceInputModes;

@end
