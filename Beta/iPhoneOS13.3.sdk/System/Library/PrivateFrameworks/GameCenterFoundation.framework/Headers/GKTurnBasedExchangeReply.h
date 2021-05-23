/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class GKTurnBasedExchangeReplyInternal, GKTurnBasedMatch, GKTurnBasedParticipant, NSData, NSDate, NSString;

@interface GKTurnBasedExchangeReply : NSObject

{
    GKTurnBasedParticipant *_recipient;
    GKTurnBasedExchangeReplyInternal *_internal;
    GKTurnBasedMatch *_matchWeak;
}

@property (retain, nonatomic) GKTurnBasedParticipant *recipient;
@property (retain, nonatomic) NSData *data;
@property (retain) GKTurnBasedExchangeReplyInternal *internal;
@property (nonatomic) GKTurnBasedMatch *match;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) NSDate *replyDate;

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
