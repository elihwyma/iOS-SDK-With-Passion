/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, SANPGetNowPlayingQueueDetails;

@interface SANPGetNowPlayingQueueDetailsRemote : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (retain, nonatomic) SANPGetNowPlayingQueueDetails *queueDetails;
@property (nonatomic) double routeTimeout;

+ (id)getNowPlayingQueueDetailsRemote;
+ (id)getNowPlayingQueueDetailsRemoteWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
