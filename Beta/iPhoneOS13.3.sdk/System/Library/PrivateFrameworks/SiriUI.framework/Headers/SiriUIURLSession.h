/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <NSObject.h>

@class NSMapTable, NSString, NSURLSession;

@interface SiriUIURLSession : NSObject

{
    NSURLSession *_URLSession;
    NSMapTable *_tasksForClient;
    NSMapTable *_imageDownloadForTask;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedURLSession;

- (id)init;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (id)imageTaskWithHTTPGetRequest:(id)arg1 client:(id)arg2 fitToSize:(struct CGSize)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)imageTaskWithHTTPGetRequest:(id)arg1 client:(id)arg2 fitToSize:(struct CGSize)arg3 fillColor:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)imageTaskWithHTTPGetRequest:(id)arg1 client:(id)arg2 fitToSize:(struct CGSize)arg3 fillColor:(id)arg4 userAgent:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)imageTaskWithHTTPGetRequest:(id)arg1 client:(id)arg2 fitToSize:(struct CGSize)arg3 incremental:(_Bool)arg4 progressHandler:(CDUnknownBlockType)arg5 fillColor:(id)arg6 userAgent:(id)arg7;
- (void)_registerTask:(id)arg1 forClient:(id)arg2;
- (void)_unregisterTask:(id)arg1 forClient:(id)arg2;
- (id)imageTaskWithHTTPGetRequest:(id)arg1 client:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)imageTaskWithHTTPGetRequest:(id)arg1 client:(id)arg2 fitToSize:(struct CGSize)arg3 incremental:(_Bool)arg4 progressHandler:(CDUnknownBlockType)arg5 fillColor:(id)arg6;
- (void)cancelAllTasksForClient:(id)arg1;

@end
