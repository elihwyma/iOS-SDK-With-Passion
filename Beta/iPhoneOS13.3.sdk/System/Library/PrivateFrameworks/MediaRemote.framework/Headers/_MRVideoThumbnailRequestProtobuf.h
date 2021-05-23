/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@interface _MRVideoThumbnailRequestProtobuf : PBCodable

{
    CDStruct_82f37d05 _timeIntervals;
    float _thumbnailsHeight;
    float _thumbnailsWidth;
    struct {
        unsigned int thumbnailsHeight:1;
        unsigned int thumbnailsWidth:1;
    } _has;
}

@property (nonatomic, readonly) unsigned long long timeIntervalsCount;
@property (nonatomic, readonly) double *timeIntervals;
@property (nonatomic) _Bool hasThumbnailsWidth;
@property (nonatomic) float thumbnailsWidth;
@property (nonatomic) _Bool hasThumbnailsHeight;
@property (nonatomic) float thumbnailsHeight;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearTimeIntervals;
- (double)timeIntervalsAtIndex:(unsigned long long)arg1;
- (void)addTimeIntervals:(double)arg1;
- (void)setTimeIntervals:(double *)arg1 count:(unsigned long long)arg2;

@end
