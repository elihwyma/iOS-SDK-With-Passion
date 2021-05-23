/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

@class CKDPRecordIdentifier, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKDPMarkAssetBrokenRequest : PBRequest

{
    NSString *_affectedRecordType;
    CKDPRecordIdentifier *_brokenAssetRecordID;
    NSString *_fieldName;
    NSMutableArray *_fileSignatures;
    int _listIndex;
    NSMutableArray *_referenceSignatures;
    _Bool _isPackage;
    _Bool _skipWriteMissingAssetStatusRecord;
    struct {
        unsigned int listIndex:1;
        unsigned int isPackage:1;
        unsigned int skipWriteMissingAssetStatusRecord:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasBrokenAssetRecordID;
@property (retain, nonatomic) CKDPRecordIdentifier *brokenAssetRecordID;
@property (nonatomic, readonly) _Bool hasFieldName;
@property (retain, nonatomic) NSString *fieldName;
@property (nonatomic) _Bool hasListIndex;
@property (nonatomic) int listIndex;
@property (retain, nonatomic) NSMutableArray *fileSignatures;
@property (retain, nonatomic) NSMutableArray *referenceSignatures;
@property (nonatomic) _Bool hasIsPackage;
@property (nonatomic) _Bool isPackage;
@property (nonatomic, readonly) _Bool hasAffectedRecordType;
@property (retain, nonatomic) NSString *affectedRecordType;
@property (nonatomic) _Bool hasSkipWriteMissingAssetStatusRecord;
@property (nonatomic) _Bool skipWriteMissingAssetStatusRecord;

+ (id)options;
+ (Class)fileSignatureType;
+ (Class)referenceSignatureType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addFileSignature:(id)arg1;
- (void)addReferenceSignature:(id)arg1;
- (unsigned long long)fileSignaturesCount;
- (void)clearFileSignatures;
- (id)fileSignatureAtIndex:(unsigned long long)arg1;
- (unsigned long long)referenceSignaturesCount;
- (void)clearReferenceSignatures;
- (id)referenceSignatureAtIndex:(unsigned long long)arg1;

@end
