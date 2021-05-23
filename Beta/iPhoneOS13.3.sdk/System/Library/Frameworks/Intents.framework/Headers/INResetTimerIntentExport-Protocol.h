/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INTimer, NSNumber;

@protocol INResetTimerIntentExport <Swift>

@property (copy, nonatomic) INTimer *targetTimer;
@property (copy, nonatomic) NSNumber *resetMultiple;

- (unsigned short)init;

@end
