/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface _MRGameControllerPropertiesProtobuf : PBCodable

{
    int _buttonAUpDelay;
    unsigned int _playerIndex;
    int _profile;
    NSString *_vendorName;
    _Bool _supportsExtendedMotion;
    struct {
        unsigned int buttonAUpDelay:1;
        unsigned int playerIndex:1;
        unsigned int profile:1;
        unsigned int supportsExtendedMotion:1;
    } _has;
}

@property (nonatomic) _Bool hasPlayerIndex;
@property (nonatomic) unsigned int playerIndex;
@property (nonatomic, readonly) _Bool hasVendorName;
@property (retain, nonatomic) NSString *vendorName;
@property (nonatomic) _Bool hasButtonAUpDelay;
@property (nonatomic) int buttonAUpDelay;
@property (nonatomic) _Bool hasProfile;
@property (nonatomic) int profile;
@property (nonatomic) _Bool hasSupportsExtendedMotion;
@property (nonatomic) _Bool supportsExtendedMotion;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)profileAsString:(int)arg1;
- (int)StringAsProfile:(id)arg1;

@end
