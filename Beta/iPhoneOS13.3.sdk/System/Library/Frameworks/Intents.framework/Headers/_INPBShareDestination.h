/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBContact;

@interface _INPBShareDestination : PBCodable <Swift>

{
    struct {
        unsigned int deviceType:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _deviceType;
    _INPBContact *_contact;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBContact *contact;
@property (nonatomic, readonly) _Bool hasContact;
@property (nonatomic) int deviceType;
@property (nonatomic) _Bool hasDeviceType;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)deviceTypeAsString:(int)arg1;
- (int)StringAsDeviceType:(id)arg1;

@end
