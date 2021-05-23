/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSOperationQueue, NSString, geo_isolater;

__attribute__((visibility("hidden")))
@interface GEOAnalyticsPipelineRemoteProxy : NSObject

{
    NSOperationQueue *_opQueue;
    unsigned long long _maxOpCount;
    unsigned long long _droppedLogMsgCount;
    geo_isolater *_enqueueLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)shortSessionValuesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_reportLogMsgType:(int)arg1 eventType:(int)arg2 logMsg:(id)arg3 completion:(CDUnknownBlockType)arg4 completionQueue:(id)arg5;
- (void)_reportMapKitCountType:(int)arg1 appId:(id)arg2 completion:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;
- (void)setShortSessionValues:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)reportLogMsgType:(int)arg1 eventType:(int)arg2 logMsg:(id)arg3 completion:(CDUnknownBlockType)arg4 completionQueue:(id)arg5;
- (void)reportMapKitCountType:(int)arg1 appId:(id)arg2 completion:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;
- (void)setEvalMode:(_Bool)arg1;
- (void)flushEvalData;
- (void)initiateUploadOfType:(int)arg1;
- (void)showEvalDataWithPredicate:(id)arg1 visitorBlock:(CDUnknownBlockType)arg2 summaryBlock:(CDUnknownBlockType)arg3;
- (id)getEvalStatus;

@end
