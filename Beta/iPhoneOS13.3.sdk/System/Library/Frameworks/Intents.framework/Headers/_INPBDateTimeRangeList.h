/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBCondition;

@interface _INPBDateTimeRangeList : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBCondition *_condition;
    NSArray *_dateRanges;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBCondition *condition;
@property (nonatomic, readonly) _Bool hasCondition;
@property (copy, nonatomic) NSArray *dateRanges;
@property (nonatomic, readonly) unsigned long long dateRangesCount;

+ (_Bool)supportsSecureCoding;
+ (Class)dateRangeType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearDateRanges;
- (void)addDateRange:(id)arg1;
- (id)dateRangeAtIndex:(unsigned long long)arg1;

@end
