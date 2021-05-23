/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/Swift-Protocol.h>

@class VCPProtoTime;

__attribute__((visibility("hidden")))
@interface VCPProtoVideoKeyFrame : PBCodable <Swift>

{
    float _curationScore;
    VCPProtoTime *_timestamp;
}

@property (retain, nonatomic) VCPProtoTime *timestamp;
@property (nonatomic) float curationScore;

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
