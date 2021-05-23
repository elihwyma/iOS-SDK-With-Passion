/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SASmsCancelCurrentAudioPlayBack : SABaseClientBoundCommand

+ (id)cancelCurrentAudioPlayBack;
+ (id)cancelCurrentAudioPlayBackWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
