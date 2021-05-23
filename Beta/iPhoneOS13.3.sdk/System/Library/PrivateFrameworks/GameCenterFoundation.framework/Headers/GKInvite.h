/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class GKInviteInternal, GKPlayer, NSData, NSString;

@interface GKInvite : NSObject

{
    _Bool _cancelled;
    GKInviteInternal *_internal;
    GKPlayer *_sender;
}

@property (retain) GKInviteInternal *internal;
@property (nonatomic, readonly) NSString *inviteID;
@property (nonatomic, readonly) NSData *sessionToken;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) _Bool isNearby;
@property (nonatomic, getter=isCancelled) _Bool cancelled;
@property (retain, nonatomic, readonly) GKPlayer *sender;
@property (retain, nonatomic, readonly) NSString *inviter;
@property (nonatomic, readonly, getter=isHosted) _Bool hosted;
@property (nonatomic, readonly) unsigned long long playerGroup;
@property (nonatomic, readonly) unsigned int playerAttributes;

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithInternalRepresentation:(id)arg1;

@end
