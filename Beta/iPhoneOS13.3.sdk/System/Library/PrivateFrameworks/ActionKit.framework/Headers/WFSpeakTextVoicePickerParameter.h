/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSString, WFAction;

@interface WFSpeakTextVoicePickerParameter : WFEnumerationParameter

{
    WFAction *_action;
}

@property (weak, nonatomic) WFAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultVoiceForLanguageCode:(id)arg1;

- (_Bool)isHidden;
- (id)possibleStates;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)defaultSerializedRepresentation;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (id)selectedLanguageCode;
- (id)sortedVoicesForLanguageCode:(id)arg1;
- (id)voiceForIdentifier:(id)arg1 languageCode:(id)arg2;

@end
