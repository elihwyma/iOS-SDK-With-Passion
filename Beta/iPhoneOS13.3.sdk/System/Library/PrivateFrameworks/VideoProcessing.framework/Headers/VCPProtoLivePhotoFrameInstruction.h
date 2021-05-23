/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface VCPProtoLivePhotoFrameInstruction : PBCodable <Swift>

{
    struct {
        float *list;
        unsigned long long count;
        unsigned long long size;
    } _homographyParams;
    long long _epoch;
    long long _timeValue;
    int _flags;
    int _timeScale;
}

@property (nonatomic) long long timeValue;
@property (nonatomic, readonly) unsigned long long homographyParamsCount;
@property (nonatomic, readonly) float *homographyParams;
@property (nonatomic) int timeScale;
@property (nonatomic) long long epoch;
@property (nonatomic) int flags;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (void)dealloc;
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
- (void)clearHomographyParams;
- (float)homographyParamAtIndex:(unsigned long long)arg1;
- (void)addHomographyParam:(float)arg1;
- (void)setHomographyParams:(float *)arg1 count:(unsigned long long)arg2;

@end
