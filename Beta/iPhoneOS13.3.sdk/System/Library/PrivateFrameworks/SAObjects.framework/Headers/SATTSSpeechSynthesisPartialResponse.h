/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class SATTSSpeechSynthesisAudioInfo, SAUIAudioData;

@interface SATTSSpeechSynthesisPartialResponse : SABaseClientBoundCommand

@property (retain, nonatomic) SAUIAudioData *aceAudioData;
@property (retain, nonatomic) SATTSSpeechSynthesisAudioInfo *aceAudioInfo;
@property (nonatomic) long long currentPacketNumber;

+ (id)speechSynthesisPartialResponse;
+ (id)speechSynthesisPartialResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
