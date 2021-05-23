/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, RMSServiceMessage;

__attribute__((visibility("hidden")))
@interface RMSConnectToServiceMessage : PBCodable

{
    NSString *_pairingGUID;
    RMSServiceMessage *_service;
    _Bool _allowPairing;
    struct {
        unsigned int allowPairing:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasService;
@property (retain, nonatomic) RMSServiceMessage *service;
@property (nonatomic, readonly) _Bool hasPairingGUID;
@property (retain, nonatomic) NSString *pairingGUID;
@property (nonatomic) _Bool hasAllowPairing;
@property (nonatomic) _Bool allowPairing;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
