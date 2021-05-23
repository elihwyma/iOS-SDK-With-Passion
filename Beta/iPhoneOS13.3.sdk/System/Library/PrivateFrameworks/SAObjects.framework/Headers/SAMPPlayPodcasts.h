/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSString;

@interface SAMPPlayPodcasts : SADomainCommand

@property (copy, nonatomic) NSString *episodePlaybackOrder;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSString *requesterSharedUserId;
@property (copy, nonatomic) NSString *sharedUserIdFromPlayableITunesAccount;
@property (nonatomic) _Bool startPlaying;

+ (id)playPodcasts;
+ (id)playPodcastsWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
