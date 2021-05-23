/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/Swift-Protocol.h>

@class NSMutableArray, VCPProtoLivePhotoVariationParams;

@interface VCPProtoLivePhotoEffectsRecipe : PBCodable <Swift>

{
    long long _epoch;
    long long _outputFrameDurValue;
    VCPProtoLivePhotoVariationParams *_autoloop;
    VCPProtoLivePhotoVariationParams *_bounce;
    int _cropRectHeight;
    int _cropRectWidth;
    int _cropRectX;
    int _cropRectY;
    int _flags;
    NSMutableArray *_frameInstructions;
    VCPProtoLivePhotoVariationParams *_longexposure;
    int _minVersion;
    VCPProtoLivePhotoVariationParams *_stabilize;
    int _stabilizeResult;
    int _timeScale;
    int _version;
    struct {
        unsigned int epoch:1;
        unsigned int flags:1;
    } _has;
}

@property (nonatomic) int stabilizeResult;
@property (nonatomic) long long outputFrameDurValue;
@property (nonatomic) int cropRectX;
@property (nonatomic) int cropRectY;
@property (nonatomic) int cropRectHeight;
@property (nonatomic) int cropRectWidth;
@property (nonatomic) int timeScale;
@property (nonatomic) _Bool hasEpoch;
@property (nonatomic) long long epoch;
@property (nonatomic) _Bool hasFlags;
@property (nonatomic) int flags;
@property (retain, nonatomic) NSMutableArray *frameInstructions;
@property (retain, nonatomic) VCPProtoLivePhotoVariationParams *autoloop;
@property (retain, nonatomic) VCPProtoLivePhotoVariationParams *bounce;
@property (retain, nonatomic) VCPProtoLivePhotoVariationParams *longexposure;
@property (retain, nonatomic) VCPProtoLivePhotoVariationParams *stabilize;
@property (nonatomic) int minVersion;
@property (nonatomic) int version;

+ (id)resultFromLegacyDictionary:(id)arg1;
+ (Class)frameInstructionsType;

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
- (void)addFrameInstructions:(id)arg1;
- (unsigned long long)frameInstructionsCount;
- (void)clearFrameInstructions;
- (id)frameInstructionsAtIndex:(unsigned long long)arg1;
- (id)exportToLegacyDictionaryFromFrameInstruction:(id)arg1;
- (id)exportToLegacyDictionaryFromParam:(id)arg1 withLoopFlavor:(id)arg2;

@end
