/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol _INPBControlHomeIntentResponse <Swift>

@property (copy, nonatomic) NSArray *entityResponses;
@property (nonatomic, readonly) unsigned long long entityResponsesCount;

+ (unsigned short)entityResponsesType;

- (unsigned short)clearEntityResponses;
- (unsigned short)addEntityResponses: /* Error: Ran out of types for this method. */;
- (unsigned short)entityResponsesAtIndex: /* Error: Ran out of types for this method. */;

@end
