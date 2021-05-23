/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface CKDPUserAvailableQuotaResponse : PBCodable

{
    unsigned long long _storageAvailableBytes;
    struct {
        unsigned int storageAvailableBytes:1;
    } _has;
}

@property (nonatomic) _Bool hasStorageAvailableBytes;
@property (nonatomic) unsigned long long storageAvailableBytes;

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
