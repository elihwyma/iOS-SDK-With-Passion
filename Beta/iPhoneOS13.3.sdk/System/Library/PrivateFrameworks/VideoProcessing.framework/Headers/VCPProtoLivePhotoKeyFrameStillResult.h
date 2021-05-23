/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface VCPProtoLivePhotoKeyFrameStillResult : PBCodable <Swift>

{
    float _sharpness;
    float _stillTime;
    float _textureness;
    _Bool _hasFlash;
}

@property (nonatomic) float sharpness;
@property (nonatomic) float textureness;
@property (nonatomic) _Bool hasFlash;
@property (nonatomic) float stillTime;

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
