/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

@class ASDGatherLogsRequestOptions, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface ASDGatherLogsRequest : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSXPCConnection *_connection;
    ASDGatherLogsRequestOptions *_options;
}

+ (long long)requestType;

- (id)initWithOptions:(id)arg1;
- (void)_sendRequestWithOptions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_sendHarFileRequestWithOptions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_sendGatherRequestWithOptions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_combineLogs:(id)arg1 toDir:(id)arg2;
- (void)_copyDB:(id)arg1 fullSourcePath:(id)arg2 toDir:(id)arg3 datbaseBase:(id)arg4;
- (id)_appstoredContainerPath;
- (id)_zippedDataForURL:(id)arg1;
- (id)_combineAllLogs;
- (id)_createCombinedHarFile;
- (void)createLogFileArchiveWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)createHarFileArchiveWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)gatherLogsWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
