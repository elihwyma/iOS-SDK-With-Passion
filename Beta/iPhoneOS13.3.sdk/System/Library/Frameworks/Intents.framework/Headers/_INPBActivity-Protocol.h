/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBString;

@protocol _INPBActivity <Swift>

@property (copy, nonatomic) NSArray *activityDescriptors;
@property (nonatomic, readonly) unsigned long long activityDescriptorsCount;
@property (retain, nonatomic) _INPBString *activityType;
@property (nonatomic, readonly) _Bool hasActivityType;

+ (unsigned short)activityDescriptorsType;

- (unsigned short)clearActivityDescriptors;
- (unsigned short)addActivityDescriptors: /* Error: Ran out of types for this method. */;
- (unsigned short)activityDescriptorsAtIndex: /* Error: Ran out of types for this method. */;

@end
