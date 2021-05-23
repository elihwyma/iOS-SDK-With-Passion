/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobVideoSettings : PBCodable

{
    unsigned int _customVideoHeight;
    unsigned int _customVideoWidth;
    unsigned int _rtpSSRC;
    unsigned int _tilesPerFrame;
    NSMutableArray *_videoPayloadCollections;
    _Bool _allowRTCPFB;
    struct {
        unsigned int customVideoHeight:1;
        unsigned int customVideoWidth:1;
        unsigned int tilesPerFrame:1;
    } _has;
}

@property (nonatomic) unsigned int rtpSSRC;
@property (nonatomic) _Bool allowRTCPFB;
@property (retain, nonatomic) NSMutableArray *videoPayloadCollections;
@property (nonatomic) _Bool hasCustomVideoWidth;
@property (nonatomic) unsigned int customVideoWidth;
@property (nonatomic) _Bool hasCustomVideoHeight;
@property (nonatomic) unsigned int customVideoHeight;
@property (nonatomic) _Bool hasTilesPerFrame;
@property (nonatomic) unsigned int tilesPerFrame;

+ (Class)videoPayloadCollectionsType;

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
- (void)addVideoPayloadCollections:(id)arg1;
- (unsigned long long)videoPayloadCollectionsCount;
- (void)clearVideoPayloadCollections;
- (id)videoPayloadCollectionsAtIndex:(unsigned long long)arg1;
- (id)initWithSSRC:(unsigned int)arg1 allowRTCPFB:(_Bool)arg2 videoRuleCollections:(id)arg3 featureStrings:(id)arg4 isCellular16x9Capable:(_Bool)arg5;
- (id)initWithScreenSSRC:(unsigned int)arg1 allowRTCPFB:(_Bool)arg2 videoRuleCollections:(id)arg3 featureStrings:(id)arg4 isCellular16x9Capable:(_Bool)arg5 customVideoWidth:(unsigned int)arg6 customVideoHeight:(unsigned int)arg7 tilesPerFrame:(unsigned int)arg8;
- (id)newVideoRuleCollectionsForScreen:(_Bool)arg1 isCellular16x9Capable:(_Bool)arg2 isLocalConfig:(_Bool)arg3;
- (id)newFeatureStrings;
- (void)printVideoWithLogFile:(void *)arg1;
- (void)printScreenWithLogFile:(void *)arg1;
- (_Bool)setVideoRuleCollections:(id)arg1 featureStrings:(id)arg2 isScreen:(_Bool)arg3 isCellular16x9Capable:(_Bool)arg4;
- (id)getPayloadSettingsForPayload:(int)arg1;
- (void)checkAndInsertRuleWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 framerate:(int)arg3 payload:(int)arg4 priority:(double)arg5 negotiationBitfield:(unsigned int *)arg6 negotiationBit:(unsigned int)arg7 rules:(id)arg8 isCellular16x9Capable:(_Bool)arg9;
- (id)parameterSetStringFromPayloadSettings:(id)arg1;

@end
