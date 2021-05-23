/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString;

@interface _INPBLocalDate : PBCodable <Swift>

{
    struct {
        unsigned int dayOfMonth:1;
        unsigned int dayOfWeek:1;
        unsigned int month:1;
        unsigned int year:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _dayOfWeek;
    long long _dayOfMonth;
    long long _month;
    long long _year;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long dayOfMonth;
@property (nonatomic) _Bool hasDayOfMonth;
@property (nonatomic) int dayOfWeek;
@property (nonatomic) _Bool hasDayOfWeek;
@property (nonatomic) long long month;
@property (nonatomic) _Bool hasMonth;
@property (nonatomic) long long year;
@property (nonatomic) _Bool hasYear;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dayOfWeekAsString:(int)arg1;
- (int)StringAsDayOfWeek:(id)arg1;

@end
