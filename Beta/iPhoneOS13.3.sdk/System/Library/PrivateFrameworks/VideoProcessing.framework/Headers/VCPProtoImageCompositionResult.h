/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/Swift-Protocol.h>

@class VCPProtoLine, VCPProtoPoint;

__attribute__((visibility("hidden")))
@interface VCPProtoImageCompositionResult : PBCodable <Swift>

{
    float _confidence;
    VCPProtoLine *_dominantLine;
    VCPProtoPoint *_vanishingPoint;
}

@property (nonatomic) float confidence;
@property (retain, nonatomic) VCPProtoPoint *vanishingPoint;
@property (retain, nonatomic) VCPProtoLine *dominantLine;

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
