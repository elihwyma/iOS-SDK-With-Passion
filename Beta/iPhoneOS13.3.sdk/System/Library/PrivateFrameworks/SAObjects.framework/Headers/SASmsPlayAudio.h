/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class SASmsSms;

@interface SASmsPlayAudio : SABaseClientBoundCommand

@property (retain, nonatomic) SASmsSms *message;

+ (id)playAudio;
+ (id)playAudioWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
