/*
 Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
 */

#import <Foundation/NSObject.h>

@class NSDate, NSTimer;

@interface NADecayingTimer : NSObject

{
    NSDate *_referenceDate;
    unsigned long long _minimumUnit;
    CDUnknownBlockType _block;
    NSTimer *_timer;
}

@property (nonatomic, readonly) NSDate *referenceDate;
@property (nonatomic, readonly) unsigned long long minimumUnit;
@property (copy, nonatomic, readonly) CDUnknownBlockType block;
@property (retain, nonatomic) NSTimer *timer;

- (void)dealloc;
- (void)invalidate;
- (void)_scheduleNextTimer;
- (id)_nextFireDate;
- (id)initWithReferenceDate:(id)arg1 minimumUnit:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (unsigned long long)_mostSignificantUnitForDateComponents:(id)arg1;
- (void)_timerEvent;

@end
