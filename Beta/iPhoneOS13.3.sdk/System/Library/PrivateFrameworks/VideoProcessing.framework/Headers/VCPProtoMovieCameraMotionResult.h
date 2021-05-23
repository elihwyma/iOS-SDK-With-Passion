/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/Swift-Protocol.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieCameraMotionResult : PBCodable <Swift>

{
    int _motionType;
    VCPProtoTimeRange *_timeRange;
    _Bool _isFast;
}

@property (retain, nonatomic) VCPProtoTimeRange *timeRange;
@property (nonatomic) int motionType;
@property (nonatomic) _Bool isFast;

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
