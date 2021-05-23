/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBValueMetadata;

@protocol _INPBTemperatureValue <Swift>

@property (nonatomic) double magnitude;
@property (nonatomic) _Bool hasMagnitude;
@property (nonatomic) int unit;
@property (nonatomic) _Bool hasUnit;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (nonatomic, readonly) _Bool hasValueMetadata;

- (unsigned short)unitAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsUnit: /* Error: Ran out of types for this method. */;

@end
