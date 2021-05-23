/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

#import <TVMLKit/Swift-Protocol.h>

@class NSMutableDictionary, NSString, NSURLSession;

@protocol OS_dispatch_queue;

@interface TVURLImageLoader : NSObject <Swift>

{
    _Bool _imageRotationEnabled;
    NSURLSession *_session;
    NSMutableDictionary *_loadOptionsByID;
    NSMutableDictionary *_loadIDsByURL;
    NSMutableDictionary *_taskOptionsByURL;
    NSObject<OS_dispatch_queue> *_processingQueue;
}

@property (nonatomic, readonly) NSURLSession *session;
@property (nonatomic, readonly) NSMutableDictionary *loadOptionsByID;
@property (nonatomic, readonly) NSMutableDictionary *loadIDsByURL;
@property (nonatomic, readonly) NSMutableDictionary *taskOptionsByURL;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *processingQueue;
@property (nonatomic, getter=isImageRotationEnabled) _Bool imageRotationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)URLForObject:(id)arg1;
- (id)imageKeyForObject:(id)arg1;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 imageDirection:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)cancelLoad:(id)arg1;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_executeOnProcessingQueue:(CDUnknownBlockType)arg1;

@end
