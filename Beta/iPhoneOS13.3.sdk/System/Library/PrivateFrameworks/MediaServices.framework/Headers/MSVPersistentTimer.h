/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, PCPersistentTimer;

@interface MSVPersistentTimer : NSObject

{
    PCPersistentTimer *_timer;
    NSString *_name;
    CDUnknownBlockType _block;
    NSDate *_startDate;
    double _interval;
}

@property (nonatomic, readonly, getter=isValid) _Bool valid;

- (void)dealloc;
- (void)invalidate;
- (void)invalidateWithReason:(id)arg1;
- (void)_handleTimerElapsed:(id)arg1;
- (id)initWithInterval:(double)arg1 name:(id)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;

@end
