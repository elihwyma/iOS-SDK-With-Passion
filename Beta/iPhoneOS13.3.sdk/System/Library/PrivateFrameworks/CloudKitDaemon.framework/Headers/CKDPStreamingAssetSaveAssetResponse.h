/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDPStreamingAssetSaveAssetResponse : PBCodable

{
    long long _reservedSize;
    long long _uploadURLExpirationTimeSeconds;
    NSString *_uploadURL;
    struct {
        unsigned int reservedSize:1;
        unsigned int uploadURLExpirationTimeSeconds:1;
    } _has;
}

@property (nonatomic) _Bool hasReservedSize;
@property (nonatomic) long long reservedSize;
@property (nonatomic, readonly) _Bool hasUploadURL;
@property (retain, nonatomic) NSString *uploadURL;
@property (nonatomic) _Bool hasUploadURLExpirationTimeSeconds;
@property (nonatomic) long long uploadURLExpirationTimeSeconds;

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
