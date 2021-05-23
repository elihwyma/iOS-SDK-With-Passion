/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBCondition;

@protocol _INPBTemperatureList <Swift>

@property (retain, nonatomic) _INPBCondition *condition;
@property (nonatomic, readonly) _Bool hasCondition;
@property (copy, nonatomic) NSArray *temperatures;
@property (nonatomic, readonly) unsigned long long temperaturesCount;

+ (unsigned short)temperatureType;

- (unsigned short)clearTemperatures;
- (unsigned short)addTemperature: /* Error: Ran out of types for this method. */;
- (unsigned short)temperatureAtIndex: /* Error: Ran out of types for this method. */;

@end
