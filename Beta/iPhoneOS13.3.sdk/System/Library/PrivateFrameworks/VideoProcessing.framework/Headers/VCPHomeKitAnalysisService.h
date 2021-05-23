/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface VCPHomeKitAnalysisService : NSObject

{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_managementQueue;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    NSMutableDictionary *_progressBlocks;
    int _nextRequestID;
}

+ (id)analysisService;

- (id)init;
- (id)connection;
- (void)cancelAllRequests;
- (void)cancelRequest:(int)arg1;
- (int)requestAnalysis:(unsigned long long)arg1 ofAssetData:(id)arg2 withProperties:(id)arg3 progressHandler:(CDUnknownBlockType)arg4 andCompletionHandler:(CDUnknownBlockType)arg5;
- (void)reportProgress:(double)arg1 forRequest:(int)arg2;
- (int)requestAnalysis:(unsigned long long)arg1 ofAssetSurface:(id)arg2 withProperties:(id)arg3 progressHandler:(CDUnknownBlockType)arg4 andCompletionHandler:(CDUnknownBlockType)arg5;

@end
