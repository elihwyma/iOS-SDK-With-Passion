/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSNumber;

@interface SANPGetNowPlayingQueueDetails : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (nonatomic) long long nextItemCount;
@property (copy, nonatomic) NSNumber *preemptiveNowPlayingQueueDetailsTimeOut;
@property (nonatomic) long long previousItemCount;

+ (id)getNowPlayingQueueDetails;
+ (id)getNowPlayingQueueDetailsWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
