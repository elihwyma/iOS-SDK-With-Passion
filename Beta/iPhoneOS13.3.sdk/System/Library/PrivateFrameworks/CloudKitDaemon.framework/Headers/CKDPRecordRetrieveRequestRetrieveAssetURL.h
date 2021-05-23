/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRequestedFields;

__attribute__((visibility("hidden")))
@interface CKDPRecordRetrieveRequestRetrieveAssetURL : PBCodable

{
    long long _requestedTTL;
    CKDPRequestedFields *_assetFields;
    int _type;
    struct {
        unsigned int requestedTTL:1;
        unsigned int type:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasAssetFields;
@property (retain, nonatomic) CKDPRequestedFields *assetFields;
@property (nonatomic) _Bool hasRequestedTTL;
@property (nonatomic) long long requestedTTL;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;

@end
