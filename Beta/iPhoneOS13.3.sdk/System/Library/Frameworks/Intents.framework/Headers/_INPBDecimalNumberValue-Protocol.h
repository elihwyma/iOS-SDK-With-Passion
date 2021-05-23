/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBValueMetadata;

@protocol _INPBDecimalNumberValue <Swift>

@property (nonatomic) int exponent;
@property (nonatomic) _Bool hasExponent;
@property (nonatomic) _Bool isNegative;
@property (nonatomic) _Bool hasIsNegative;
@property (nonatomic) unsigned long long mantissa;
@property (nonatomic) _Bool hasMantissa;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (nonatomic, readonly) _Bool hasValueMetadata;

@end
