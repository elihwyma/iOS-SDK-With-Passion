/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

#import <GameCenterFoundation/Swift-Protocol.h>

@class GKChallengeInternal, GKGame, GKPlayer, NSDate, NSOrderedSet, NSString;

@interface GKChallenge : NSObject <Swift>

{
    GKChallengeInternal *_internal;
}

@property (retain) GKChallengeInternal *internal;
@property (copy, nonatomic, readonly) NSString *challengeID;
@property (copy, nonatomic, readonly) NSString *bundleID;
@property (copy, nonatomic, readonly) NSOrderedSet *compatibleBundleIDs;
@property (nonatomic, readonly) GKGame *game;
@property (nonatomic, readonly) _Bool detailsLoaded;
@property (copy, nonatomic, readonly) NSString *issuingPlayerID;
@property (copy, nonatomic, readonly) NSString *receivingPlayerID;
@property (copy, nonatomic, readonly) GKPlayer *issuingPlayer;
@property (copy, nonatomic, readonly) GKPlayer *receivingPlayer;
@property (nonatomic, readonly) long long state;
@property (retain, nonatomic, readonly) NSDate *issueDate;
@property (retain, nonatomic, readonly) NSDate *completionDate;
@property (copy, nonatomic, readonly) NSString *message;

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)stringForState:(long long)arg1;
+ (id)challengeForGame:(id)arg1 andPlayer:(id)arg2 withAchievement:(id)arg3;
+ (id)challengeForGame:(id)arg1 andPlayer:(id)arg2 withScore:(id)arg3;
+ (id)challengeForInternalRepresentation:(id)arg1;
+ (void)loadChallengesForGame:(id)arg1 receivingPlayer:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (void)getCountOfChallenges:(CDUnknownBlockType)arg1;
+ (void)loadChallengesForReceivingPlayer:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)loadReceivedChallengesWithCompletionHandler:(CDUnknownBlockType)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithInternalRepresentation:(id)arg1;
- (void)decline;
- (void)loadDetailsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)issueToPlayers:(id)arg1 message:(id)arg2;
- (void)declineWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)hasLoadedUIDetails;
- (void)loadUIDetailsWithHandler:(CDUnknownBlockType)arg1;
- (id)infoTextForIssuingPlayer:(id)arg1;

@end
