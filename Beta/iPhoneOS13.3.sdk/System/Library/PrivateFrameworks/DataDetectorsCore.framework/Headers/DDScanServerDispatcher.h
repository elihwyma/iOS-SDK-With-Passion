/*
 Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface DDScanServerDispatcher : NSObject

{
    NSObject<OS_dispatch_queue> *_scannerQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_reportQueue;
    NSObject<OS_dispatch_source> *_memoryWarningSource;
    _Bool _memoryWarningInProgress;
    NSMutableDictionary *_scanners;
    _Bool _tearDownRequested;
    unsigned long long _jobIdentifier;
}

- (id)init;
- (void)dealloc;
- (void)cancelJob:(long long)arg1;
- (id)reportQueue;
- (id)scannerListForConfiguration:(id)arg1;
- (_Bool)reachedMaxSimultaneousTask;
- (long long)emptyIdentifier;
- (long long)scannerConf:(id)arg1 sync:(_Bool)arg2 shortTask:(_Bool)arg3 runTask:(CDUnknownBlockType)arg4;
- (void)recycleScanner:(id)arg1 fromList:(id)arg2 sameQueue:(_Bool)arg3;

@end
