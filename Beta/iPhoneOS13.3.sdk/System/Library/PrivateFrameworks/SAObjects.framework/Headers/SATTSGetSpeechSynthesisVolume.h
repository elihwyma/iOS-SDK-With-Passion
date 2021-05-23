/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SATTSGetSpeechSynthesisVolume : SABaseClientBoundCommand

+ (id)getSpeechSynthesisVolume;
+ (id)getSpeechSynthesisVolumeWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
