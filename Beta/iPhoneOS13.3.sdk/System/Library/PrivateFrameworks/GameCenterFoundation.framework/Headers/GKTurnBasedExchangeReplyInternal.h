/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSData, NSDate, NSDictionary;

@interface GKTurnBasedExchangeReplyInternal : GKInternalRepresentation

{
    NSDictionary *_localizableMessage;
    NSData *_data;
    NSDate *_replyDate;
    unsigned char _recipientIndex;
}

@property (nonatomic) unsigned char recipientIndex;
@property (retain, nonatomic) NSDictionary *localizableMessage;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSDate *replyDate;

+ (id)secureCodedPropertyKeys;

- (void)dealloc;

@end
