/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

@interface CKDPNotificationSyncResponse : PBCodable

{
    NSData *_changeID;
    NSMutableArray *_pushMessages;
    _Bool _moreAvailable;
    struct {
        unsigned int moreAvailable:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasChangeID;
@property (retain, nonatomic) NSData *changeID;
@property (retain, nonatomic) NSMutableArray *pushMessages;
@property (nonatomic) _Bool hasMoreAvailable;
@property (nonatomic) _Bool moreAvailable;

+ (Class)pushMessageType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addPushMessage:(id)arg1;
- (unsigned long long)pushMessagesCount;
- (void)clearPushMessages;
- (id)pushMessageAtIndex:(unsigned long long)arg1;

@end
