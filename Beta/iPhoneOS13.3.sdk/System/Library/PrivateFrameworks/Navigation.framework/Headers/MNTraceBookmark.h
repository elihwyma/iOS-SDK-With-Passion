/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface MNTraceBookmark : PBCodable

{
    double _timestamp;
    NSData *_imageData;
    struct {
        unsigned int timestamp:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic, readonly) _Bool hasImageData;
@property (retain, nonatomic) NSData *imageData;

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
