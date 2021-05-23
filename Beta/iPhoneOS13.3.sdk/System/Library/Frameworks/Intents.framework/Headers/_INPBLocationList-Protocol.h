/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBCondition;

@protocol _INPBLocationList <Swift>

@property (retain, nonatomic) _INPBCondition *condition;
@property (nonatomic, readonly) _Bool hasCondition;
@property (copy, nonatomic) NSArray *locations;
@property (nonatomic, readonly) unsigned long long locationsCount;

+ (unsigned short)locationType;

- (unsigned short)addLocation: /* Error: Ran out of types for this method. */;
- (unsigned short)clearLocations;
- (unsigned short)locationAtIndex: /* Error: Ran out of types for this method. */;

@end
