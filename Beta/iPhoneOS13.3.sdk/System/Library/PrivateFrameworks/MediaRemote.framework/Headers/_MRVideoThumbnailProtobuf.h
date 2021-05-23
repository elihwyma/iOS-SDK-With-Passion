/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface _MRVideoThumbnailProtobuf : PBCodable

{
    double _time;
    NSData *_imageData;
    struct {
        unsigned int time:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasImageData;
@property (retain, nonatomic) NSData *imageData;
@property (nonatomic) _Bool hasTime;
@property (nonatomic) double time;

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
