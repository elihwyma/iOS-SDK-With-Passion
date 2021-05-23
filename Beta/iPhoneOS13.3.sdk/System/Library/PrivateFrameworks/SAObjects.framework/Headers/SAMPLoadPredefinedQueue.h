/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSNumber, NSString;

@interface SAMPLoadPredefinedQueue : SADomainCommand

@property (nonatomic) _Bool dryRun;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (nonatomic) int mediaItemType;
@property (copy, nonatomic) NSString *requesterSharedUserId;
@property (copy, nonatomic) NSString *sharedUserIdFromPlayableMusicAccount;
@property (nonatomic) _Bool shouldShuffle;
@property (copy, nonatomic) NSNumber *startPlaying;

+ (id)loadPredefinedQueue;
+ (id)loadPredefinedQueueWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
