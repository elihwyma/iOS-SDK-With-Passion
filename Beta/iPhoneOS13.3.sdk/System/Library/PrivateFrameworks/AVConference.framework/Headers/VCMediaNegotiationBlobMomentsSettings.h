/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobMomentsSettings : PBCodable

{
    unsigned int _capabilities;
    unsigned int _multiwayCapabilities;
    unsigned int _supportedImageTypes;
    unsigned int _supportedVideoCodecs;
    struct {
        unsigned int multiwayCapabilities:1;
        unsigned int supportedImageTypes:1;
        unsigned int supportedVideoCodecs:1;
    } _has;
}

@property (nonatomic) unsigned int capabilities;
@property (nonatomic) _Bool hasSupportedVideoCodecs;
@property (nonatomic) unsigned int supportedVideoCodecs;
@property (nonatomic) _Bool hasSupportedImageTypes;
@property (nonatomic) unsigned int supportedImageTypes;
@property (nonatomic) _Bool hasMultiwayCapabilities;
@property (nonatomic) unsigned int multiwayCapabilities;

+ (unsigned int)avcMomentsCapabilitiesForMultiwayMomentsCapabilities:(int)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)newVideoCodecSet;
- (id)initWithVideoCodecs:(id)arg1 imageTypes:(id)arg2;
- (id)newImageTypeSet;

@end
