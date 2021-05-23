/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBLocalDate, _INPBLocalTime;

@interface _INPBDateTime : PBCodable <Swift>

{
    struct {
        unsigned int calendarSystem:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _calendarSystem;
    _INPBLocalDate *_date;
    _INPBLocalTime *_time;
    NSString *_timeZoneID;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int calendarSystem;
@property (nonatomic) _Bool hasCalendarSystem;
@property (retain, nonatomic) _INPBLocalDate *date;
@property (nonatomic, readonly) _Bool hasDate;
@property (retain, nonatomic) _INPBLocalTime *time;
@property (nonatomic, readonly) _Bool hasTime;
@property (copy, nonatomic) NSString *timeZoneID;
@property (nonatomic, readonly) _Bool hasTimeZoneID;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)calendarSystemAsString:(int)arg1;
- (int)StringAsCalendarSystem:(id)arg1;

@end
