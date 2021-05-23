/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INTimer, NSNumber;

@protocol INResumeTimerIntentExport <Swift>

@property (copy, nonatomic) INTimer *targetTimer;
@property (copy, nonatomic) NSNumber *resumeMultiple;

- (unsigned short)init;

@end
