/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NTPBRestorePaidSubscription : PBCodable

{
    NSMutableArray *_items;
    NSMutableArray *_restoredPaidSubscriptionChannelIds;
}

@property (retain, nonatomic) NSMutableArray *restoredPaidSubscriptionChannelIds;
@property (retain, nonatomic) NSMutableArray *items;

+ (Class)itemsType;
+ (Class)restoredPaidSubscriptionChannelIdsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (unsigned long long)itemsCount;
- (void)addItems:(id)arg1;
- (void)clearItems;
- (id)itemsAtIndex:(unsigned long long)arg1;
- (void)addRestoredPaidSubscriptionChannelIds:(id)arg1;
- (void)clearRestoredPaidSubscriptionChannelIds;
- (unsigned long long)restoredPaidSubscriptionChannelIdsCount;
- (id)restoredPaidSubscriptionChannelIdsAtIndex:(unsigned long long)arg1;

@end
