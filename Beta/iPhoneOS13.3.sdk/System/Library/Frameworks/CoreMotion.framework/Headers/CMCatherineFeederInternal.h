/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMCatherineFeederInternal : NSObject

{
    NSObject<OS_dispatch_queue> *fInternalQueue;
    struct CLConnectionClient *fLocationdConnection;
}

- (id)init;
- (void)dealloc;
- (void)_teardown;
- (void)_startDaemonConnection;
- (void)_feedCatherine:(double)arg1 confidence:(double)arg2 timestamp:(double)arg3;

@end
