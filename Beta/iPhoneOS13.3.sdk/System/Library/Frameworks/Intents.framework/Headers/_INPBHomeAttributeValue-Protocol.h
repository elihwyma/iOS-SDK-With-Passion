/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBHomeAttributeRange;

@protocol _INPBHomeAttributeValue <Swift>

@property (nonatomic) _Bool booleanValue;
@property (nonatomic) _Bool hasBooleanValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) _Bool hasDoubleValue;
@property (nonatomic) long long integerValue;
@property (nonatomic) _Bool hasIntegerValue;
@property (nonatomic) int limitValue;
@property (nonatomic) _Bool hasLimitValue;
@property (retain, nonatomic) _INPBHomeAttributeRange *rangeValue;
@property (nonatomic, readonly) _Bool hasRangeValue;
@property (copy, nonatomic) NSString *stringValue;
@property (nonatomic, readonly) _Bool hasStringValue;
@property (nonatomic) int unit;
@property (nonatomic) _Bool hasUnit;
@property (nonatomic) int valueType;
@property (nonatomic) _Bool hasValueType;

- (unsigned short)limitValueAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsLimitValue: /* Error: Ran out of types for this method. */;
- (unsigned short)unitAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsUnit: /* Error: Ran out of types for this method. */;
- (unsigned short)valueTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsValueType: /* Error: Ran out of types for this method. */;

@end
