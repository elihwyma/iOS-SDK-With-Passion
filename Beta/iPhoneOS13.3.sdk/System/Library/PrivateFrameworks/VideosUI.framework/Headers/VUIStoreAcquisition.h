/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, VUIAcquisitionRequest;

@interface VUIStoreAcquisition : NSObject

{
    NSMutableArray *_pendingQueue;
    unsigned long long _concurrentCount;
    VUIAcquisitionRequest *_activeRequest;
}

+ (id)sharedInstance;

- (id)init;
- (void)_processRequest:(id)arg1;
- (void)_handleRequest:(id)arg1;
- (id)acquireWithProperties:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_processFirstRequest;
- (void)_handleCustomRequest:(id)arg1;
- (void)_handleResponse:(id)arg1 responseDict:(id)arg2 forRequest:(id)arg3 error:(id)arg4 cancelled:(_Bool)arg5;
- (void)_postCrossProcessNotificationWithBuyParams:(id)arg1 error:(id)arg2;
- (void)cancelAcquisition:(id)arg1;

@end
