/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NACVolumeWarningMessage : PBCodable

{
    NSString *_category;
    int _originIdentifier;
    int _volumeWarningState;
    _Bool _volumeWarningEnabled;
    struct {
        unsigned int originIdentifier:1;
        unsigned int volumeWarningState:1;
        unsigned int volumeWarningEnabled:1;
    } _has;
}

@property (nonatomic) _Bool hasVolumeWarningEnabled;
@property (nonatomic) _Bool volumeWarningEnabled;
@property (nonatomic, readonly) _Bool hasCategory;
@property (retain, nonatomic) NSString *category;
@property (nonatomic) _Bool hasOriginIdentifier;
@property (nonatomic) int originIdentifier;
@property (nonatomic) _Bool hasVolumeWarningState;
@property (nonatomic) int volumeWarningState;

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
