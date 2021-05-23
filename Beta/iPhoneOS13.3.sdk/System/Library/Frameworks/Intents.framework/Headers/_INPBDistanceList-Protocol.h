/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBCondition;

@protocol _INPBDistanceList <Swift>

@property (retain, nonatomic) _INPBCondition *condition;
@property (nonatomic, readonly) _Bool hasCondition;
@property (copy, nonatomic) NSArray *distances;
@property (nonatomic, readonly) unsigned long long distancesCount;

+ (unsigned short)distanceType;

- (unsigned short)clearDistances;
- (unsigned short)addDistance: /* Error: Ran out of types for this method. */;
- (unsigned short)distanceAtIndex: /* Error: Ran out of types for this method. */;

@end
