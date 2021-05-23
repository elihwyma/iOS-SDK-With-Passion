/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDPStreamingAssetRetrieveAssetResponse : PBCodable

{
    long long _downloadURLExpirationTimeSeconds;
    long long _size;
    NSString *_downloadURL;
    struct {
        unsigned int downloadURLExpirationTimeSeconds:1;
        unsigned int size:1;
    } _has;
}

@property (nonatomic) _Bool hasSize;
@property (nonatomic) long long size;
@property (nonatomic, readonly) _Bool hasDownloadURL;
@property (retain, nonatomic) NSString *downloadURL;
@property (nonatomic) _Bool hasDownloadURLExpirationTimeSeconds;
@property (nonatomic) long long downloadURLExpirationTimeSeconds;

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
