/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRecordIdentifier, CKDPRecordType, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPAssetUploadTokenRetrieveRequestRecordAssetUpload : PBCodable

{
    NSMutableArray *_assetFields;
    CKDPRecordIdentifier *_recordId;
    CKDPRecordType *_type;
}

@property (nonatomic, readonly) _Bool hasRecordId;
@property (retain, nonatomic) CKDPRecordIdentifier *recordId;
@property (nonatomic, readonly) _Bool hasType;
@property (retain, nonatomic) CKDPRecordType *type;
@property (retain, nonatomic) NSMutableArray *assetFields;

+ (Class)assetFieldsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addAssetFields:(id)arg1;
- (unsigned long long)assetFieldsCount;
- (void)clearAssetFields;
- (id)assetFieldsAtIndex:(unsigned long long)arg1;

@end
