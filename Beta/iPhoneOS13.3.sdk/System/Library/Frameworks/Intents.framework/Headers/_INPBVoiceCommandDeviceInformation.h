/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString;

@interface _INPBVoiceCommandDeviceInformation : PBCodable <Swift>

{
    struct {
        unsigned int deviceIdiom:1;
        unsigned int isHomePodInUltimateMode:1;
    } _has;
    _Bool _isHomePodInUltimateMode;
    _Bool __encodeLegacyGloryData;
    int _deviceIdiom;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int deviceIdiom;
@property (nonatomic) _Bool hasDeviceIdiom;
@property (nonatomic) _Bool isHomePodInUltimateMode;
@property (nonatomic) _Bool hasIsHomePodInUltimateMode;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)deviceIdiomAsString:(int)arg1;
- (int)StringAsDeviceIdiom:(id)arg1;

@end
