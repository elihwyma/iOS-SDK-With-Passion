/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface VCPProtoLivePhotoVariationParams : PBCodable <Swift>

{
    int _errorCode;
    int _loopFadeLen;
    int _loopPeriod;
    int _loopStart;
    struct {
        unsigned int loopFadeLen:1;
        unsigned int loopPeriod:1;
        unsigned int loopStart:1;
    } _has;
}

@property (nonatomic) int errorCode;
@property (nonatomic) _Bool hasLoopFadeLen;
@property (nonatomic) int loopFadeLen;
@property (nonatomic) _Bool hasLoopPeriod;
@property (nonatomic) int loopPeriod;
@property (nonatomic) _Bool hasLoopStart;
@property (nonatomic) int loopStart;

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
