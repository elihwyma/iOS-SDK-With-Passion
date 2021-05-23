/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class GKTurnBasedExchangeInternal, GKTurnBasedMatch, GKTurnBasedParticipant, NSArray, NSData, NSDate, NSString;

@interface GKTurnBasedExchange : NSObject

{
    GKTurnBasedParticipant *_sender;
    GKTurnBasedMatch *_matchWeak;
    GKTurnBasedExchangeInternal *_internal;
    NSArray *_replies;
    NSArray *_recipients;
}

@property (retain, nonatomic) NSArray *recipients;
@property (retain, nonatomic) NSArray *replies;
@property (retain, nonatomic) NSString *exchangeID;
@property (retain, nonatomic) GKTurnBasedParticipant *sender;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSDate *timeoutDate;
@property (retain, nonatomic) NSDate *completionDate;
@property (retain) GKTurnBasedExchangeInternal *internal;
@property (nonatomic) GKTurnBasedMatch *match;
@property (nonatomic, readonly) BOOL status;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) NSDate *sendDate;

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
- (void)_updateInternalFromMatchInternal:(id)arg1;
- (void)cancelWithLocalizableMessageKey:(id)arg1 arguments:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)replyWithLocalizableMessageKey:(id)arg1 arguments:(id)arg2 data:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
