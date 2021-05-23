/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKCDPCodeServiceRequestServiceClientConfig;

__attribute__((visibility("hidden")))
@interface CKCDPCodeServiceRequestClientConfig : PBCodable

{
    CKCDPCodeServiceRequestServiceClientConfig *_config;
    int _serviceType;
    struct {
        unsigned int serviceType:1;
    } _has;
}

@property (nonatomic) _Bool hasServiceType;
@property (nonatomic) int serviceType;
@property (nonatomic, readonly) _Bool hasConfig;
@property (retain, nonatomic) CKCDPCodeServiceRequestServiceClientConfig *config;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)serviceTypeAsString:(int)arg1;
- (int)StringAsServiceType:(id)arg1;

@end
