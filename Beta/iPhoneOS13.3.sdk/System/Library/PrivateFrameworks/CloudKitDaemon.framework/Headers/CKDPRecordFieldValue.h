/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPAsset, CKDPDate, CKDPLocationCoordinate, CKDPPackage, CKDPRecordReference, CKDPStreamingAsset, NSData, NSMutableArray, NSString;

@interface CKDPRecordFieldValue : PBCodable

{
    double _doubleValue;
    long long _signedValue;
    CKDPAsset *_assetValue;
    NSData *_bytesValue;
    CKDPDate *_dateValue;
    NSMutableArray *_listValues;
    CKDPLocationCoordinate *_locationValue;
    CKDPPackage *_packageValue;
    CKDPRecordReference *_referenceValue;
    CKDPStreamingAsset *_streamingAssetValue;
    NSString *_stringValue;
    int _type;
    _Bool _isEncrypted;
    struct {
        unsigned int doubleValue:1;
        unsigned int signedValue:1;
        unsigned int type:1;
        unsigned int isEncrypted:1;
    } _has;
}

@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) _Bool hasBytesValue;
@property (retain, nonatomic) NSData *bytesValue;
@property (nonatomic) _Bool hasSignedValue;
@property (nonatomic) long long signedValue;
@property (nonatomic) _Bool hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic, readonly) _Bool hasDateValue;
@property (retain, nonatomic) CKDPDate *dateValue;
@property (nonatomic, readonly) _Bool hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic, readonly) _Bool hasLocationValue;
@property (retain, nonatomic) CKDPLocationCoordinate *locationValue;
@property (nonatomic, readonly) _Bool hasReferenceValue;
@property (retain, nonatomic) CKDPRecordReference *referenceValue;
@property (nonatomic, readonly) _Bool hasAssetValue;
@property (retain, nonatomic) CKDPAsset *assetValue;
@property (retain, nonatomic) NSMutableArray *listValues;
@property (nonatomic, readonly) _Bool hasPackageValue;
@property (retain, nonatomic) CKDPPackage *packageValue;
@property (nonatomic, readonly) _Bool hasStreamingAssetValue;
@property (retain, nonatomic) CKDPStreamingAsset *streamingAssetValue;
@property (nonatomic) _Bool hasIsEncrypted;
@property (nonatomic) _Bool isEncrypted;

+ (Class)listValueType;

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
- (void)addListValue:(id)arg1;
- (unsigned long long)listValuesCount;
- (void)clearListValues;
- (id)listValueAtIndex:(unsigned long long)arg1;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;

@end
