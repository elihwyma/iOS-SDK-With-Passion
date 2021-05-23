/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/Swift-Protocol.h>

@class VCPProtoBounds, VCPProtoTimeRange, VCPProtoVideoKeyFrame;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieSummaryResult : PBCodable <Swift>

{
    float _curationScore;
    VCPProtoVideoKeyFrame *_keyFrame;
    VCPProtoBounds *_playbackCrop;
    VCPProtoTimeRange *_timeRange;
    _Bool _autoPlayable;
}

@property (retain, nonatomic) VCPProtoTimeRange *timeRange;
@property (nonatomic) float curationScore;
@property (nonatomic, readonly) _Bool hasKeyFrame;
@property (retain, nonatomic) VCPProtoVideoKeyFrame *keyFrame;
@property (nonatomic) _Bool autoPlayable;
@property (nonatomic, readonly) _Bool hasPlaybackCrop;
@property (retain, nonatomic) VCPProtoBounds *playbackCrop;

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
