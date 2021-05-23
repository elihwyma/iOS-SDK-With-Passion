/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol _INPBMediaItemGroup <Swift>

@property (copy, nonatomic) NSArray *values;
@property (nonatomic, readonly) unsigned long long valuesCount;

+ (unsigned short)valuesType;

- (unsigned short)clearValues;
- (unsigned short)valuesAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)addValues: /* Error: Ran out of types for this method. */;

@end
