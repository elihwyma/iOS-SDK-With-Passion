/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INDateComponentsRange, NSArray, NSNumber;

@protocol INSnoozeTasksIntentExport <Swift>

@property (copy, nonatomic) NSArray *tasks;
@property (copy, nonatomic) INDateComponentsRange *nextTriggerTime;
@property (copy, nonatomic) NSNumber *all;

- (unsigned short)init;

@end
