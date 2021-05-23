/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface RMSControlInterfaceMessage : PBCodable

{
    _Bool _supportsDirectionalControl;
    _Bool _supportsSpeakerSelection;
    _Bool _supportsVolumeControl;
    struct {
        unsigned int supportsDirectionalControl:1;
        unsigned int supportsSpeakerSelection:1;
        unsigned int supportsVolumeControl:1;
    } _has;
}

@property (nonatomic) _Bool hasSupportsSpeakerSelection;
@property (nonatomic) _Bool supportsSpeakerSelection;
@property (nonatomic) _Bool hasSupportsVolumeControl;
@property (nonatomic) _Bool supportsVolumeControl;
@property (nonatomic) _Bool hasSupportsDirectionalControl;
@property (nonatomic) _Bool supportsDirectionalControl;

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
