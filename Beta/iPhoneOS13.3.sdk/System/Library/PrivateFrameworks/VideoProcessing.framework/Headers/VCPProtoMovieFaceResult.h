/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/Swift-Protocol.h>

@class VCPProtoBounds, VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieFaceResult : PBCodable <Swift>

{
    VCPProtoBounds *_bounds;
    int _faceID;
    int _mouthExpression;
    int _position;
    VCPProtoTimeRange *_timeRange;
    _Bool _isCloseup;
}

@property (retain, nonatomic) VCPProtoTimeRange *timeRange;
@property (nonatomic) int mouthExpression;
@property (nonatomic) int position;
@property (retain, nonatomic) VCPProtoBounds *bounds;
@property (nonatomic) _Bool isCloseup;
@property (nonatomic) int faceID;

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
