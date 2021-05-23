/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSArray, NSData, NSDate, NSDictionary, NSString;

@interface GKTurnBasedExchangeInternal : GKInternalRepresentation

{
    NSString *_exchangeID;
    NSArray *_recipientIndexes;
    NSString *_statusString;
    NSDictionary *_localizableMessage;
    NSData *_data;
    NSDate *_sendDate;
    NSDate *_timeoutDate;
    NSDate *_completionDate;
    NSArray *_replies;
    unsigned char _senderIndex;
}

@property (retain, nonatomic) NSString *exchangeID;
@property (nonatomic) unsigned char senderIndex;
@property (retain, nonatomic) NSArray *recipientIndexes;
@property (retain, nonatomic) NSString *statusString;
@property (retain, nonatomic) NSDictionary *localizableMessage;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSDate *sendDate;
@property (retain, nonatomic) NSDate *timeoutDate;
@property (retain, nonatomic) NSDate *completionDate;
@property (retain, nonatomic) NSArray *replies;

+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
