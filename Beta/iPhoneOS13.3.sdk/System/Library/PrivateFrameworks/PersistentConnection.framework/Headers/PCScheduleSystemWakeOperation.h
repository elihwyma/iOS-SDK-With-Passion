/*
 Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <Foundation/NSOperation.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface PCScheduleSystemWakeOperation : NSOperation

{
    _Bool _scheduleOrCancel;
    _Bool _userVisible;
    NSDate *_wakeDate;
    double _acceptableDelay;
    NSString *_serviceIdentifier;
    void *_unqiueIdentifier;
}

- (void)main;
- (id)initForScheduledWake:(_Bool)arg1 wakeDate:(id)arg2 acceptableDelay:(double)arg3 userVisible:(_Bool)arg4 serviceIdentifier:(id)arg5 uniqueIdentifier:(void *)arg6;

@end
