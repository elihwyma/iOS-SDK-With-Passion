/*
 Image: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
 */

#import <TextInputCore/TIKeyboardFeatureSpecialization.h>

@interface TIKeyboardHandwritingSpecialization : TIKeyboardFeatureSpecialization

- (id)keyboardBehaviors;
- (_Bool)canHandleKeyHitTest;
- (_Bool)shouldExtendPriorWord;
- (id)wordSeparator;
- (id)replacementForDoubleSpace;
- (id)nonstopPunctuationCharacters;
- (_Bool)supportsLearning;

@end
