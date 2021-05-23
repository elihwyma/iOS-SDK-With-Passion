/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol _INPBConfidenceScore <Swift>

@property (nonatomic) float aggregateScore;
@property (nonatomic) _Bool hasAggregateScore;
@property (copy, nonatomic) NSArray *components;
@property (nonatomic, readonly) unsigned long long componentsCount;

+ (unsigned short)componentsType;

- (unsigned short)clearComponents;
- (unsigned short)addComponents: /* Error: Ran out of types for this method. */;
- (unsigned short)componentsAtIndex: /* Error: Ran out of types for this method. */;

@end
