/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INIntent, INIntentResponse, NSDateInterval;

@protocol INInteractionExport <Swift>

@property (copy, nonatomic) INIntent *intent;
@property (copy, nonatomic) INIntentResponse *intentResponse;
@property (copy, nonatomic) NSDateInterval *dateInterval;

- (unsigned short)init;

@end
