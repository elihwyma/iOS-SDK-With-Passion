/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSString, SAMPPodcastCollection;

@interface SAMPPlayPodcastCollection : SADomainCommand

@property (copy, nonatomic) NSString *assetInfo;
@property (copy, nonatomic) NSString *episodePlaybackOrder;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (retain, nonatomic) SAMPPodcastCollection *podcastCollection;
@property (copy, nonatomic) NSString *requesterSharedUserId;
@property (copy, nonatomic) NSString *sharedUserIdFromPlayableITunesAccount;
@property (nonatomic) _Bool startPlaying;

+ (id)playPodcastCollection;
+ (id)playPodcastCollectionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
