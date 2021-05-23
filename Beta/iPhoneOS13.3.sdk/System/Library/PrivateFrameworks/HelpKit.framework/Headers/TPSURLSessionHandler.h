/*
 Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

#import <Foundation/NSObject.h>

@class NSIndexSet, NSString;

@interface TPSURLSessionHandler : NSObject

{
    _Bool _shouldIgnoreInMemoryCaching;
    NSIndexSet *_excludeCachingDataTypes;
}

@property (nonatomic) _Bool shouldIgnoreInMemoryCaching;
@property (retain, nonatomic) NSIndexSet *excludeCachingDataTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)setRootViewController:(id)arg1;

- (id)init;
- (id)cacheControllerForDataType:(long long)arg1;
- (id)processJSONFormattedDataForCDSError:(id)arg1;
- (_Bool)shouldCacheToDiskForSessionTask:(id)arg1;
- (_Bool)respectCachingForRequest:(id)arg1;
- (id)URLSessionManagerSessionOperationQueue:(id)arg1;
- (id)URLSessionManagerSessionConfiguration:(id)arg1;
- (_Bool)URLSessionManagerShouldCoalesceRequest:(id)arg1;
- (void)URLSessionManagerDidReceiveChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sessionTask:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sessionTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)sessionTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sessionTask:(id)arg1 didFinishDownloadingToURL:(id)arg2;
- (void)sessionTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSessionManagerRequestResumed:(id)arg1 sessionTask:(id)arg2;
- (void)URLSessionManagerRequestCompleted:(id)arg1 sessionTask:(id)arg2;

@end
