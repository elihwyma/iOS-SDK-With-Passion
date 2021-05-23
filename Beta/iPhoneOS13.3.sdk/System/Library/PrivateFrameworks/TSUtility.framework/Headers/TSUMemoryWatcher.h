/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

@class TSUFlushingManager;

@interface TSUMemoryWatcher : NSObject

{
    TSUFlushingManager *_flushingManager;
    _Bool _going;
    _Bool _stop;
}

- (void)dealloc;
- (void)stopObserving;
- (void)beginObserving;
- (id)initWithFlushingManager:(id)arg1;
- (void)_periodicallySimulateMemoryWarning:(id)arg1;
- (void)_simulateMemoryWarning:(id)arg1;

@end
