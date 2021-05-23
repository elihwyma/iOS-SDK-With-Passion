/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NACEUVolumeLimitMessage : PBCodable

{
    NSString *_category;
    float _eUVolumeLimit;
    int _originIdentifier;
    struct {
        unsigned int eUVolumeLimit:1;
        unsigned int originIdentifier:1;
    } _has;
}

@property (nonatomic) _Bool hasEUVolumeLimit;
@property (nonatomic) float eUVolumeLimit;
@property (nonatomic, readonly) _Bool hasCategory;
@property (retain, nonatomic) NSString *category;
@property (nonatomic) _Bool hasOriginIdentifier;
@property (nonatomic) int originIdentifier;

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
