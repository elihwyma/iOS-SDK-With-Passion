/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBString;

@protocol _INPBEvent <Swift>

@property (copy, nonatomic) NSArray *eventDescriptors;
@property (nonatomic, readonly) unsigned long long eventDescriptorsCount;
@property (retain, nonatomic) _INPBString *eventType;
@property (nonatomic, readonly) _Bool hasEventType;

+ (unsigned short)eventDescriptorsType;

- (unsigned short)clearEventDescriptors;
- (unsigned short)addEventDescriptors: /* Error: Ran out of types for this method. */;
- (unsigned short)eventDescriptorsAtIndex: /* Error: Ran out of types for this method. */;

@end
