/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

@class CKDPRecordFieldIdentifier, CKDPRecordType, NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPAssetUploadTokenRetrieveRequest : PBRequest

{
    NSMutableArray *_assets;
    NSData *_authPutRequest;
    int _authPutType;
    NSMutableArray *_contentRequestHeaders;
    CKDPRecordFieldIdentifier *_field;
    CKDPRecordType *_type;
    NSMutableArray *_uploads;
    struct {
        unsigned int authPutType:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasType;
@property (retain, nonatomic) CKDPRecordType *type;
@property (nonatomic, readonly) _Bool hasField;
@property (retain, nonatomic) CKDPRecordFieldIdentifier *field;
@property (retain, nonatomic) NSMutableArray *assets;
@property (retain, nonatomic) NSMutableArray *uploads;
@property (retain, nonatomic) NSMutableArray *contentRequestHeaders;
@property (nonatomic, readonly) _Bool hasAuthPutRequest;
@property (retain, nonatomic) NSData *authPutRequest;
@property (nonatomic) _Bool hasAuthPutType;
@property (nonatomic) int authPutType;

+ (id)options;
+ (Class)assetsType;
+ (Class)contentRequestHeadersType;
+ (Class)uploadsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (unsigned long long)assetsCount;
- (void)addAssets:(id)arg1;
- (void)clearAssets;
- (id)assetsAtIndex:(unsigned long long)arg1;
- (void)addContentRequestHeaders:(id)arg1;
- (unsigned long long)contentRequestHeadersCount;
- (void)clearContentRequestHeaders;
- (id)contentRequestHeadersAtIndex:(unsigned long long)arg1;
- (void)addUploads:(id)arg1;
- (unsigned long long)uploadsCount;
- (void)clearUploads;
- (id)uploadsAtIndex:(unsigned long long)arg1;
- (id)authPutTypeAsString:(int)arg1;
- (int)StringAsAuthPutType:(id)arg1;

@end
