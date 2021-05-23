/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/Swift-Protocol.h>

@class VCPProtoBounds;

__attribute__((visibility("hidden")))
@interface VCPProtoImageFaceResult : PBCodable <Swift>

{
    VCPProtoBounds *_bounds;
    int _eyeExpression;
    float _faceQuality;
    int _mouthExpression;
    int _position;
    int _yaw;
    _Bool _isCloseup;
    struct {
        unsigned int faceQuality:1;
    } _has;
}

@property (nonatomic) int eyeExpression;
@property (nonatomic) int mouthExpression;
@property (nonatomic) int yaw;
@property (nonatomic) int position;
@property (retain, nonatomic) VCPProtoBounds *bounds;
@property (nonatomic) _Bool isCloseup;
@property (nonatomic) _Bool hasFaceQuality;
@property (nonatomic) float faceQuality;

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
