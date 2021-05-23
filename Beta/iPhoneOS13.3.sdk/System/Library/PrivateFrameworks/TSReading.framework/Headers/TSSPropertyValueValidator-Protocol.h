/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@protocol TSSPropertyValueValidator

+ (unsigned short)validateIntValue:forProperty: /* Error: Ran out of types for this method. */;
+ (unsigned short)validateIntValue:forProperty:min:max: /* Error: Ran out of types for this method. */;
+ (unsigned short)validateIntValueAsBool:forProperty: /* Error: Ran out of types for this method. */;
+ (unsigned short)validateFloatValue:forProperty: /* Error: Ran out of types for this method. */;
+ (unsigned short)validateDoubleValue:forProperty: /* Error: Ran out of types for this method. */;
+ (unsigned short)validateObjectValue:withClass:forProperty: /* Error: Ran out of types for this method. */;
+ (unsigned short)propertiesAllowingNSNull;

- (unsigned short)validateIntValue:forProperty: /* Error: Ran out of types for this method. */;
- (unsigned short)validateIntValue:forProperty:min:max: /* Error: Ran out of types for this method. */;
- (unsigned short)validateIntValueAsBool:forProperty: /* Error: Ran out of types for this method. */;
- (unsigned short)validateFloatValue:forProperty: /* Error: Ran out of types for this method. */;
- (unsigned short)validateDoubleValue:forProperty: /* Error: Ran out of types for this method. */;
- (unsigned short)validateObjectValue:withClass:forProperty: /* Error: Ran out of types for this method. */;

@end
