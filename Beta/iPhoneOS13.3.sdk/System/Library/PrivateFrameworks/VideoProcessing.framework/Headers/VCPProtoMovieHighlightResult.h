/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/Swift-Protocol.h>

@class VCPProtoTimeRange, VCPProtoVideoKeyFrame;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieHighlightResult : PBCodable <Swift>

{
    float _curationScore;
    VCPProtoVideoKeyFrame *_keyFrame;
    VCPProtoTimeRange *_timeRange;
}

@property (retain, nonatomic) VCPProtoTimeRange *timeRange;
@property (nonatomic) float curationScore;
@property (retain, nonatomic) VCPProtoVideoKeyFrame *keyFrame;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)exportToLegacyDictionary;

@end
