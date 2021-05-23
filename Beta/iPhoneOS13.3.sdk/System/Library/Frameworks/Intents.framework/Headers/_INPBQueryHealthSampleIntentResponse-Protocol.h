/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol _INPBQueryHealthSampleIntentResponse <Swift>

@property (copy, nonatomic) NSArray *resultValues;
@property (nonatomic, readonly) unsigned long long resultValuesCount;

+ (unsigned short)resultValuesType;

- (unsigned short)clearResultValues;
- (unsigned short)addResultValues: /* Error: Ran out of types for this method. */;
- (unsigned short)resultValuesAtIndex: /* Error: Ran out of types for this method. */;

@end
