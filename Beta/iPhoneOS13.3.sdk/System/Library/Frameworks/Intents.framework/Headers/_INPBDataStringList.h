/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBCondition;

@interface _INPBDataStringList : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBCondition *_conditionType;
    NSArray *_dataStrings;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBCondition *conditionType;
@property (nonatomic, readonly) _Bool hasConditionType;
@property (copy, nonatomic) NSArray *dataStrings;
@property (nonatomic, readonly) unsigned long long dataStringsCount;

+ (_Bool)supportsSecureCoding;
+ (Class)dataStringType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearDataStrings;
- (void)addDataString:(id)arg1;
- (id)dataStringAtIndex:(unsigned long long)arg1;

@end
