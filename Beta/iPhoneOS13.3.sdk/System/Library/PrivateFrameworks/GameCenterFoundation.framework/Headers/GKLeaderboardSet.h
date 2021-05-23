/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

#import <GameCenterFoundation/Swift-Protocol.h>

@class GKLeaderboardSetInternal, NSArray, NSString;

@interface GKLeaderboardSet : NSObject <Swift>

{
    GKLeaderboardSetInternal *_internal;
}

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic, readonly) NSArray *leaderboardIdentifiers;
@property (retain) GKLeaderboardSetInternal *internal;
@property (retain, nonatomic, readonly) NSString *groupIdentifier;
@property (copy, nonatomic) NSString *identifier;

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (_Bool)supportsSecureCoding;
+ (void)loadLeaderboardSetsForGame:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)loadLeaderboardSetsWithCompletionHandler:(CDUnknownBlockType)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithInternalRepresentation:(id)arg1;
- (void)loadLeaderboardsForGame:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)loadLeaderboardsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadLeaderboardsForGame:(id)arg1 forPlayer:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

@end
