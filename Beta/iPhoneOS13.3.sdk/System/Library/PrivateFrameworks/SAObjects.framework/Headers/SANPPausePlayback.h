/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSArray;

@interface SANPPausePlayback : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;

+ (id)pausePlayback;
+ (id)pausePlaybackWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
