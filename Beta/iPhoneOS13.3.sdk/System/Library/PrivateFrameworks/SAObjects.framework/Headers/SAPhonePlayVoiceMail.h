/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSURL, SARemoteDevice;

@interface SAPhonePlayVoiceMail : SADomainCommand

@property (retain, nonatomic) SARemoteDevice *targetDevice;
@property (copy, nonatomic) NSURL *voiceMailId;

+ (id)playVoiceMail;
+ (id)playVoiceMailWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
