/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <NSObject.h>

@protocol OS_dispatch_workloop;

@interface RBSWorkloop : NSObject

{
    NSObject<OS_dispatch_workloop> *_calloutWorkloop;
    NSObject<OS_dispatch_workloop> *_backgroundWorkloop;
    NSObject<OS_dispatch_workloop> *_syncingWorkloop;
}

+ (id)sharedInstance;
+ (id)sharedCalloutWorkloop;
+ (id)sharedBackgroundWorkloop;
+ (void)performBackgroundWork:(CDUnknownBlockType)arg1;
+ (id)createCalloutQueue:(id)arg1;
+ (void)performCallout:(CDUnknownBlockType)arg1;
+ (void)performCalloutWithServiceClass:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
+ (id)createBackgroundQueue:(id)arg1;
+ (void)performBackgroundWorkWithServiceClass:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
+ (id)createSyncingQueue:(id)arg1;

- (id)_init;

@end
