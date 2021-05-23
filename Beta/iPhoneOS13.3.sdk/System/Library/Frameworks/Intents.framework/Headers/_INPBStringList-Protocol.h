/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBCondition;

@protocol _INPBStringList <Swift>

@property (retain, nonatomic) _INPBCondition *conditionType;
@property (nonatomic, readonly) _Bool hasConditionType;
@property (copy, nonatomic) NSArray *dataStrings;
@property (nonatomic, readonly) unsigned long long dataStringsCount;

+ (unsigned short)dataStringType;

- (unsigned short)clearDataStrings;
- (unsigned short)addDataString: /* Error: Ran out of types for this method. */;
- (unsigned short)dataStringAtIndex: /* Error: Ran out of types for this method. */;

@end
