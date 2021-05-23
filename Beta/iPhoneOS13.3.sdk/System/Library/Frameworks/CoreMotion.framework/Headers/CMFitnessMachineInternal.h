/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMFitnessMachineInternal : NSObject

{
    struct CLConnectionClient *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
}

- (id)init;
- (void)dealloc;
- (void)_teardown;
- (void)_feedFitnessMachineData:(id)arg1;

@end
