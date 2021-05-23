/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol _INPBIntentSlotResolutionMulticardinalResult <Swift>

@property (copy, nonatomic) NSArray *resolutionResults;
@property (nonatomic, readonly) unsigned long long resolutionResultsCount;

+ (unsigned short)resolutionResultsType;

- (unsigned short)clearResolutionResults;
- (unsigned short)addResolutionResults: /* Error: Ran out of types for this method. */;
- (unsigned short)resolutionResultsAtIndex: /* Error: Ran out of types for this method. */;

@end
