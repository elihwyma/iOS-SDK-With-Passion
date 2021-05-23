/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface VMUDebugTimer : NSObject

{
    NSDate *_programStartTime;
    NSDate *_eventStartTime;
    NSString *_eventMessage;
}

+ (id)sharedTimer;
+ (id)sharedTimerIfCreated;

- (id)init;
- (void)stop;
- (void)_endEvent;
- (void)startWithMessage:(id)arg1;

@end
