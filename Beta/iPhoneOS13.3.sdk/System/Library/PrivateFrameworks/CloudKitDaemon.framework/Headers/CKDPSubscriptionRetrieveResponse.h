/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPSubscriptionRetrieveResponse : PBCodable

{
    NSMutableArray *_subscriptions;
}

@property (retain, nonatomic) NSMutableArray *subscriptions;

+ (Class)subscriptionsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addSubscriptions:(id)arg1;
- (unsigned long long)subscriptionsCount;
- (void)clearSubscriptions;
- (id)subscriptionsAtIndex:(unsigned long long)arg1;

@end
