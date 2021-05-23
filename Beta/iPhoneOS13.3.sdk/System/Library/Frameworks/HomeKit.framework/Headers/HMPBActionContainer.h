/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class HMPBCharacteristicWriteAction, HMPBMediaPlaybackAction;

@interface HMPBActionContainer : PBCodable

{
    HMPBCharacteristicWriteAction *_characteristicWriteAction;
    HMPBMediaPlaybackAction *_mediaPlaybackAction;
    int _type;
    struct {
        unsigned int type:1;
    } _has;
}

@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) _Bool hasCharacteristicWriteAction;
@property (retain, nonatomic) HMPBCharacteristicWriteAction *characteristicWriteAction;
@property (nonatomic, readonly) _Bool hasMediaPlaybackAction;
@property (retain, nonatomic) HMPBMediaPlaybackAction *mediaPlaybackAction;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;

@end
