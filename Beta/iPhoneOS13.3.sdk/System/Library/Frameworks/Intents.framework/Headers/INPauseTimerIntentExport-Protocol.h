/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INTimer, NSNumber;

@protocol INPauseTimerIntentExport <Swift>

@property (copy, nonatomic) INTimer *targetTimer;
@property (copy, nonatomic) NSNumber *pauseMultiple;

- (unsigned short)init;

@end
