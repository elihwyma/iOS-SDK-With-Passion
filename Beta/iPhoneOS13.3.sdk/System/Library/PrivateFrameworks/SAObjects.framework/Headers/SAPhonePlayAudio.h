/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAPhonePlayAudio : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *phoneAudioType;

+ (id)playAudio;
+ (id)playAudioWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
