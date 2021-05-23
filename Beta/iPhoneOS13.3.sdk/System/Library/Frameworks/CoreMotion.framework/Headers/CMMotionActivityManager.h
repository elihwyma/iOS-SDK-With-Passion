/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue;

@protocol OS_dispatch_queue;

@interface CMMotionActivityManager : NSObject

{
    struct CLConnectionClient *fLocationConnection;
    NSObject<OS_dispatch_queue> *fQueue;
    CDUnknownBlockType fHandler;
    NSOperationQueue *fHandlerQueue;
}

+ (_Bool)isActivityAvailable;
+ (long long)authorizationStatus;

- (id)init;
- (void)dealloc;
- (void)queryActivityStartingFromDate:(id)arg1 toDate:(id)arg2 toQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)_handleQueryResponse:(shared_ptr_bdcc6d0f)arg1 onQueue:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)startActivityUpdatesToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)stopActivityUpdates;

@end
