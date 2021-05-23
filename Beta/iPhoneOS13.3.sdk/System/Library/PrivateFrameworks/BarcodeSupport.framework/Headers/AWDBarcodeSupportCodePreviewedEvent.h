/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDBarcodeSupportCodePreviewedEvent : PBCodable

{
    unsigned long long _timestamp;
    int _previewContentType;
    struct {
        unsigned int timestamp:1;
        unsigned int previewContentType:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasPreviewContentType;
@property (nonatomic) int previewContentType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)previewContentTypeAsString:(int)arg1;
- (int)StringAsPreviewContentType:(id)arg1;

@end
