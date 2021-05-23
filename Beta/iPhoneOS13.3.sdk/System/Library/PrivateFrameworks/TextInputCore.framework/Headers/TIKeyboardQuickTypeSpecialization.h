/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/TIKeyboardFeatureSpecialization.h>

@interface TIKeyboardQuickTypeSpecialization : TIKeyboardFeatureSpecialization

- (_Bool)doesComposeText;
- (struct TIInputManager *)createInputManager;

@end
