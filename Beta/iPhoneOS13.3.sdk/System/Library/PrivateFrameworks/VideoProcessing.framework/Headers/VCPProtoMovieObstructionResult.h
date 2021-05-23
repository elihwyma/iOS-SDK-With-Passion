/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/Swift-Protocol.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieObstructionResult : PBCodable <Swift>

{
    float _obstructionScore;
    VCPProtoTimeRange *_timeRange;
}

@property (retain, nonatomic) VCPProtoTimeRange *timeRange;
@property (nonatomic) float obstructionScore;

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
