/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INContactEventTrigger, INSpatialEventTrigger, INSpeakableString, INTask, INTemporalEventTrigger;

@protocol INSetTaskAttributeIntentExport <Swift>

@property (copy, nonatomic) INTask *targetTask;
@property (copy, nonatomic) INSpeakableString *taskTitle;
@property (nonatomic) long long status;
@property (nonatomic) long long priority;
@property (copy, nonatomic) INSpatialEventTrigger *spatialEventTrigger;
@property (copy, nonatomic) INTemporalEventTrigger *temporalEventTrigger;
@property (copy, nonatomic) INContactEventTrigger *contactEventTrigger;

- (unsigned short)init;

@end
