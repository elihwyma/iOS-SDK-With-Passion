/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NNMKProtoAccountAuthenticationStatus : PBCodable

{
    double _requestTime;
    NSMutableArray *_accountsStatus;
    CDStruct_b7a4e4f9 _has;
}

@property (retain, nonatomic) NSMutableArray *accountsStatus;
@property (nonatomic) _Bool hasRequestTime;
@property (nonatomic) double requestTime;

+ (Class)accountsStatusType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addAccountsStatus:(id)arg1;
- (unsigned long long)accountsStatusCount;
- (void)clearAccountsStatus;
- (id)accountsStatusAtIndex:(unsigned long long)arg1;

@end
