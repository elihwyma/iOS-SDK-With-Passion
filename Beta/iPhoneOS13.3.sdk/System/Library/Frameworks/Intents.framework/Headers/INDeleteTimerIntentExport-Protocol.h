/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INTimer, NSNumber;

@protocol INDeleteTimerIntentExport <Swift>

@property (copy, nonatomic) INTimer *targetTimer;
@property (copy, nonatomic) NSNumber *deleteMultiple;

- (unsigned short)init;

@end
