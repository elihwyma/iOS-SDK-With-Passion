/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@interface CACAppElementsEvaluationManager : NSObject

{
    NSSet *_appIdentifersForStandardFilter;
    NSString *_evaluatorOverrideClassName;
}

+ (id)sharedManager;

- (id)init;
- (Class)evaluatorClassForAppIdentifier:(id)arg1;
- (id)_trimmedArrayOfActionableAXElements:(id)arg1;
- (id)actionableAXElementsFromAXElements:(id)arg1 forAppIdentifier:(id)arg2;
- (_Bool)isRecognitionString:(id)arg1 supportedForElement:(id)arg2;

@end
