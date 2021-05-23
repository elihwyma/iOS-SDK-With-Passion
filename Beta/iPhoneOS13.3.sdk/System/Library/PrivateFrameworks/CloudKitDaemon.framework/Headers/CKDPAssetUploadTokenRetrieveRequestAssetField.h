/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRecordFieldIdentifier, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPAssetUploadTokenRetrieveRequestAssetField : PBCodable

{
    NSMutableArray *_assets;
    CKDPRecordFieldIdentifier *_field;
}

@property (nonatomic, readonly) _Bool hasField;
@property (retain, nonatomic) CKDPRecordFieldIdentifier *field;
@property (retain, nonatomic) NSMutableArray *assets;

+ (Class)assetsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)assetsCount;
- (void)addAssets:(id)arg1;
- (void)clearAssets;
- (id)assetsAtIndex:(unsigned long long)arg1;

@end
