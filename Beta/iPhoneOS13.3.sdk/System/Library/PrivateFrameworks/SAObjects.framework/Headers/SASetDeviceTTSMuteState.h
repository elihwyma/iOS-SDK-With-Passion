/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SASetDeviceTTSMuteState : SABaseClientBoundCommand

@property (nonatomic) _Bool textToSpeechIsMuted;

+ (id)setDeviceTTSMuteState;
+ (id)setDeviceTTSMuteStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
