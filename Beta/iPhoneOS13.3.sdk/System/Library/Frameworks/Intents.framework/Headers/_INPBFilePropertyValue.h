/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBContact, _INPBDateTimeRange, _INPBLong, _INPBString;

@interface _INPBFilePropertyValue : PBCodable <Swift>

{
    struct {
        unsigned int fileType:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _fileType;
    _INPBDateTimeRange *_dateTime;
    _INPBContact *_person;
    _INPBLong *_quantity;
    _INPBString *_value;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBDateTimeRange *dateTime;
@property (nonatomic, readonly) _Bool hasDateTime;
@property (nonatomic) int fileType;
@property (nonatomic) _Bool hasFileType;
@property (retain, nonatomic) _INPBContact *person;
@property (nonatomic, readonly) _Bool hasPerson;
@property (retain, nonatomic) _INPBLong *quantity;
@property (nonatomic, readonly) _Bool hasQuantity;
@property (retain, nonatomic) _INPBString *value;
@property (nonatomic, readonly) _Bool hasValue;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)fileTypeAsString:(int)arg1;
- (int)StringAsFileType:(id)arg1;

@end
