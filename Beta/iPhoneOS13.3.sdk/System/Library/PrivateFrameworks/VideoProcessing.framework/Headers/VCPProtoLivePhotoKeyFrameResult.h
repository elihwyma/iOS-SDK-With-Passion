/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/Swift-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCPProtoLivePhotoKeyFrameResult : PBCodable <Swift>

{
    double _timestamp;
    float _contentScore;
    float _exposureScore;
    NSMutableArray *_faceResults;
    float _globalQualityScore;
    float _overallFaceQualityScore;
    float _penaltyScore;
    float _qualityScoreForLivePhoto;
    float _sharpness;
    float _textureScore;
    float _visualPleasingScore;
    struct {
        unsigned int contentScore:1;
        unsigned int globalQualityScore:1;
    } _has;
}

@property (nonatomic) double timestamp;
@property (nonatomic) float qualityScoreForLivePhoto;
@property (nonatomic) float visualPleasingScore;
@property (nonatomic) float overallFaceQualityScore;
@property (nonatomic) float exposureScore;
@property (nonatomic) float penaltyScore;
@property (nonatomic) float textureScore;
@property (nonatomic) float sharpness;
@property (retain, nonatomic) NSMutableArray *faceResults;
@property (nonatomic) _Bool hasGlobalQualityScore;
@property (nonatomic) float globalQualityScore;
@property (nonatomic) _Bool hasContentScore;
@property (nonatomic) float contentScore;

+ (Class)faceResultsType;
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
- (void)addFaceResults:(id)arg1;
- (unsigned long long)faceResultsCount;
- (void)clearFaceResults;
- (id)faceResultsAtIndex:(unsigned long long)arg1;
- (id)exportToLegacyDictionary;

@end
