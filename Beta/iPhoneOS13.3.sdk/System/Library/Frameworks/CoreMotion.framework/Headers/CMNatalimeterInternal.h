/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMNatalimeterInternal : NSObject

{
    struct CLConnectionClient *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    _Bool fStartedUpdates;
    CDUnknownBlockType fHandler;
}

- (id)init;
- (void)dealloc;
- (void)_teardown;
- (void)_handleQueryResponse:(shared_ptr_bdcc6d0f)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_queryAbsoluteNatalimetryDataSinceRecord:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_queryAbsoluteNatalimetryDataSinceDataRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_startAbsoluteNatalimetryDataUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)_stopAbsoluteNatalimetryDataUpdates;
- (unsigned long long)_promptsNeeded;

@end
