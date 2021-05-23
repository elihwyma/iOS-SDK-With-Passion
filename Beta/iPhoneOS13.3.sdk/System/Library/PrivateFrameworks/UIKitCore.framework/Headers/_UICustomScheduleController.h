/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSTimer;

__attribute__((visibility("hidden")))
@interface _UICustomScheduleController : NSObject

{
    NSMapTable *_observers;
    _Bool _inScheduleTime;
    NSTimer *_nextEventTimer;
    CDStruct_cfb9664d _schedule;
}

@property (nonatomic) CDStruct_cfb9664d schedule;
@property (nonatomic, readonly, getter=isInScheduleTime) _Bool inScheduleTime;

- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)arg1;
- (void)_significantTimeChange;
- (void)_updateTimeMonitoring:(_Bool)arg1;
- (void)_updateTimeMonitoring;
- (void)_updateWithDate:(id)arg1;
- (void)_notifyChange;
- (void)_updateStatus:(_Bool)arg1;
- (void)addObserver:(id)arg1 changeHandler:(CDUnknownBlockType)arg2;
- (void)forceUpdate;
- (id)nextTransition:(_Bool)arg1;

@end
