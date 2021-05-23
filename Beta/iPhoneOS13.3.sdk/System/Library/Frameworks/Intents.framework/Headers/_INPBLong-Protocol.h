/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol _INPBLong <Swift>

@property (copy, nonatomic) NSArray *values;
@property (nonatomic, readonly) unsigned long long valuesCount;

+ (unsigned short)valueType;

- (unsigned short)valueAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)addValue: /* Error: Ran out of types for this method. */;
- (unsigned short)clearValues;

@end
