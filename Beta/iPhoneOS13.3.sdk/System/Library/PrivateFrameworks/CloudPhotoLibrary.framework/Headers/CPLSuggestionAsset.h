/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <PBCodable.h>

@class CPLSuggestionAssetFlag, NSData, NSString;

@interface CPLSuggestionAsset : PBCodable

{
    NSData *_actionData;
    CPLSuggestionAssetFlag *_assetFlag;
    NSString *_assetIdentifier;
    NSString *_masterFingerprint;
}

@property (nonatomic, readonly) _Bool hasAssetIdentifier;
@property (retain, nonatomic) NSString *assetIdentifier;
@property (nonatomic, readonly) _Bool hasAssetFlag;
@property (retain, nonatomic) CPLSuggestionAssetFlag *assetFlag;
@property (nonatomic, readonly) _Bool hasActionData;
@property (retain, nonatomic) NSData *actionData;
@property (nonatomic, readonly) _Bool hasMasterFingerprint;
@property (retain, nonatomic) NSString *masterFingerprint;

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
