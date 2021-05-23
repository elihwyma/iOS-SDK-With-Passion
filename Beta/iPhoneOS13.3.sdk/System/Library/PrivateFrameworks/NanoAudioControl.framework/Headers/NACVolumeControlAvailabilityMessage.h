/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NACVolumeControlAvailabilityMessage : PBCodable

{
    NSString *_category;
    int _originIdentifier;
    _Bool _volumeControlAvailable;
    struct {
        unsigned int originIdentifier:1;
        unsigned int volumeControlAvailable:1;
    } _has;
}

@property (nonatomic) _Bool hasVolumeControlAvailable;
@property (nonatomic) _Bool volumeControlAvailable;
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
