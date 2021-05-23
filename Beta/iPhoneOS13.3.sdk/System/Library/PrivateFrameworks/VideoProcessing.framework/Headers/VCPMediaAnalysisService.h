/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface VCPMediaAnalysisService : NSObject

{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_managementQueue;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    NSMutableDictionary *_progressBlocks;
    int _nextRequestID;
}

+ (id)errorWithDescription:(id)arg1;
+ (int)queryProgress:(float *)arg1 forPhotoLibrary:(id)arg2 andTaskID:(unsigned long long)arg3;
+ (id)sharedAnalysisService;

- (id)init;
- (void)invalidate;
- (id)connection;
- (void)cancelAllRequests;
- (void)cancelRequest:(int)arg1;
- (void)notifyLibraryAvailableAtURL:(id)arg1;
- (int)requestLivePhotoEffectsForAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;
- (void)reportProgress:(double)arg1 forRequest:(int)arg2;
- (int)requestProcessingWithTaskID:(unsigned long long)arg1 forPhotoLibrary:(id)arg2 withOptions:(id)arg3 progessHandler:(CDUnknownBlockType)arg4 andCompletionHandler:(CDUnknownBlockType)arg5;
- (int)requestProcessingWithTaskID:(unsigned long long)arg1 forAssets:(id)arg2 withOptions:(id)arg3 progressHandler:(CDUnknownBlockType)arg4 andCompletionHandler:(CDUnknownBlockType)arg5;
- (int)requestBackgroundAnalysisForAssets:(id)arg1 realTime:(_Bool)arg2 progessHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (int)requestBackgroundProcessingWithTaskID:(unsigned long long)arg1 forPhotoLibrary:(id)arg2 progessHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (int)requestSceneProcessingForPhotoLibrary:(id)arg1 withOptions:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;
- (int)requestFullProcessingForPhotoLibrary:(id)arg1 withOptions:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;
- (int)requestSceneProcessingForAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;

@end
