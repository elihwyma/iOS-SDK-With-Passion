/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CALNNullAlarmEngineMonitor : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (void)addAlarmsFiredObserver:(id)arg1 selector:(SEL)arg2;
- (void)removeAlarmsFiredObserver:(id)arg1;

@end
