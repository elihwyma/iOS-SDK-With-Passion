/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString;

@interface _INPBRecurrenceValue : PBCodable <Swift>

{
    struct {
        unsigned int frequency:1;
        unsigned int interval:1;
        unsigned int ordinal:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _frequency;
    unsigned long long _interval;
    long long _ordinal;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int frequency;
@property (nonatomic) _Bool hasFrequency;
@property (nonatomic) unsigned long long interval;
@property (nonatomic) _Bool hasInterval;
@property (nonatomic) long long ordinal;
@property (nonatomic) _Bool hasOrdinal;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)frequencyAsString:(int)arg1;
- (int)StringAsFrequency:(id)arg1;

@end
