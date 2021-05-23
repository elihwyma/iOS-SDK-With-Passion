/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

@class CKDPRecordIdentifier, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKDPUpdateMissingAssetStatusRequest : PBRequest

{
    struct {
        long long *list;
        unsigned long long count;
        unsigned long long size;
    } _packageAssetSizes;
    long long _assetSize;
    NSString *_assetPutReceipt;
    CKDPRecordIdentifier *_missingAssetStatusRecordID;
    NSMutableArray *_packagePutReceipts;
    _Bool _recovered;
    struct {
        unsigned int assetSize:1;
        unsigned int recovered:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasMissingAssetStatusRecordID;
@property (retain, nonatomic) CKDPRecordIdentifier *missingAssetStatusRecordID;
@property (nonatomic) _Bool hasRecovered;
@property (nonatomic) _Bool recovered;
@property (nonatomic) _Bool hasAssetSize;
@property (nonatomic) long long assetSize;
@property (nonatomic, readonly) _Bool hasAssetPutReceipt;
@property (retain, nonatomic) NSString *assetPutReceipt;
@property (nonatomic, readonly) unsigned long long packageAssetSizesCount;
@property (nonatomic, readonly) long long *packageAssetSizes;
@property (retain, nonatomic) NSMutableArray *packagePutReceipts;

+ (id)options;
+ (Class)packagePutReceiptsType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addPackagePutReceipts:(id)arg1;
- (void)clearPackageAssetSizes;
- (long long)packageAssetSizeAtIndex:(unsigned long long)arg1;
- (void)addPackageAssetSize:(long long)arg1;
- (unsigned long long)packagePutReceiptsCount;
- (void)clearPackagePutReceipts;
- (id)packagePutReceiptsAtIndex:(unsigned long long)arg1;
- (void)setPackageAssetSizes:(long long *)arg1 count:(unsigned long long)arg2;

@end
