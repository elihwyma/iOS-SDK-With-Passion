/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface NACProminentHapticStateMessage : PBCodable

{
    _Bool _enabled;
    struct {
        unsigned int enabled:1;
    } _has;
}

@property (nonatomic) _Bool hasEnabled;
@property (nonatomic) _Bool enabled;

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
