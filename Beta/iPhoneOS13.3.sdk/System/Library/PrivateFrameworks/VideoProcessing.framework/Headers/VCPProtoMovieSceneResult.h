/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/Swift-Protocol.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieSceneResult : PBCodable <Swift>

{
    float _distanceToPreviousScene;
    float _flickerScore;
    float _qualityScore;
    float _sceneprintDistanceToPreviousScene;
    VCPProtoTimeRange *_timeRange;
    struct {
        unsigned int distanceToPreviousScene:1;
        unsigned int flickerScore:1;
        unsigned int sceneprintDistanceToPreviousScene:1;
    } _has;
}

@property (retain, nonatomic) VCPProtoTimeRange *timeRange;
@property (nonatomic) float qualityScore;
@property (nonatomic) _Bool hasDistanceToPreviousScene;
@property (nonatomic) float distanceToPreviousScene;
@property (nonatomic) _Bool hasFlickerScore;
@property (nonatomic) float flickerScore;
@property (nonatomic) _Bool hasSceneprintDistanceToPreviousScene;
@property (nonatomic) float sceneprintDistanceToPreviousScene;

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
