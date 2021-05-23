/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBDateTime, _INPBRecurrenceValue, _INPBValueMetadata;

@interface _INPBDateTimeRangeValue : PBCodable <Swift>

{
    struct {
        unsigned int allDay:1;
        unsigned int endCalendar:1;
        unsigned int startCalendar:1;
    } _has;
    _Bool _allDay;
    _Bool __encodeLegacyGloryData;
    long long _endCalendar;
    _INPBDateTime *_endDateTime;
    _INPBRecurrenceValue *_recurrence;
    long long _startCalendar;
    _INPBDateTime *_startDateTime;
    _INPBValueMetadata *_valueMetadata;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool allDay;
@property (nonatomic) _Bool hasAllDay;
@property (nonatomic) long long endCalendar;
@property (nonatomic) _Bool hasEndCalendar;
@property (retain, nonatomic) _INPBDateTime *endDateTime;
@property (nonatomic, readonly) _Bool hasEndDateTime;
@property (retain, nonatomic) _INPBRecurrenceValue *recurrence;
@property (nonatomic, readonly) _Bool hasRecurrence;
@property (nonatomic) long long startCalendar;
@property (nonatomic) _Bool hasStartCalendar;
@property (retain, nonatomic) _INPBDateTime *startDateTime;
@property (nonatomic, readonly) _Bool hasStartDateTime;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (nonatomic, readonly) _Bool hasValueMetadata;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
