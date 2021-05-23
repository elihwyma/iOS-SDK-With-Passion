/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDPStreamingAssetSaveAssetRequest : PBRequest

{
    long long _requestedSize;
    long long _uploadedSize;
    NSString *_uploadReceipt;
    struct {
        unsigned int requestedSize:1;
        unsigned int uploadedSize:1;
    } _has;
}

@property (nonatomic) _Bool hasRequestedSize;
@property (nonatomic) long long requestedSize;
@property (nonatomic) _Bool hasUploadedSize;
@property (nonatomic) long long uploadedSize;
@property (nonatomic, readonly) _Bool hasUploadReceipt;
@property (retain, nonatomic) NSString *uploadReceipt;

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
