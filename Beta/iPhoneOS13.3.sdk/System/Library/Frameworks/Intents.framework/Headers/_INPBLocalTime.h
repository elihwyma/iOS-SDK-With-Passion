/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString;

@interface _INPBLocalTime : PBCodable <Swift>

{
    struct {
        unsigned int hourOfDay:1;
        unsigned int millisOfSecond:1;
        unsigned int minuteOfHour:1;
        unsigned int secondOfMinute:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    long long _hourOfDay;
    long long _millisOfSecond;
    long long _minuteOfHour;
    long long _secondOfMinute;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long hourOfDay;
@property (nonatomic) _Bool hasHourOfDay;
@property (nonatomic) long long millisOfSecond;
@property (nonatomic) _Bool hasMillisOfSecond;
@property (nonatomic) long long minuteOfHour;
@property (nonatomic) _Bool hasMinuteOfHour;
@property (nonatomic) long long secondOfMinute;
@property (nonatomic) _Bool hasSecondOfMinute;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
