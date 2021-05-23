/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAUIGetResponseAlternatives;

@interface SAUIGetResponseAlternativesPlayback : SABaseClientBoundCommand

@property (retain, nonatomic) SAUIGetResponseAlternatives *playbackCommand;

+ (id)getResponseAlternativesPlayback;
+ (id)getResponseAlternativesPlaybackWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
