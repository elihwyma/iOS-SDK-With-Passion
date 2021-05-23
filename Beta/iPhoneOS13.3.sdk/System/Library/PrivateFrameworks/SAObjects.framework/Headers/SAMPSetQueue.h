/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSNumber, NSString, SAMPCollection;

@interface SAMPSetQueue : SADomainCommand

@property (copy, nonatomic) NSString *assetInfo;
@property (nonatomic) _Bool dryRun;
@property (copy, nonatomic) NSArray *filters;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (retain, nonatomic) SAMPCollection *mediaItems;
@property (copy, nonatomic) NSString *recommendationId;
@property (copy, nonatomic) NSString *requesterSharedUserId;
@property (copy, nonatomic) NSString *sharedUserIdFromPlayableMusicAccount;
@property (nonatomic) _Bool shouldOverrideManuallyCuratedUpNext;
@property (nonatomic) _Bool shouldReloadQueue;
@property (nonatomic) _Bool shouldShuffle;
@property (copy, nonatomic) NSArray *sort;
@property (copy, nonatomic) NSNumber *startPlaying;

+ (id)setQueue;
+ (id)setQueueWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
