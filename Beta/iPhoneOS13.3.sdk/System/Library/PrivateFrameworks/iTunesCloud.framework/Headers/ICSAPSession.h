/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICFPSAPContext, ICStoreRequestContext, NSOperationQueue, NSURL;

@protocol OS_dispatch_queue;

@interface ICSAPSession : NSObject

{
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSOperationQueue *_operationQueue;
    unsigned int _sapVersion;
    NSURL *_certificateURL;
    NSURL *_setupURL;
    ICFPSAPContext *_sapContext;
    NSOperationQueue *_prepareFairPlayContextOperationQueue;
    ICStoreRequestContext *_requestContext;
}

@property (nonatomic, readonly) NSOperationQueue *_prepareFairPlayContextOperationQueue;
@property (retain, nonatomic, setter=_setSAPContext:) ICFPSAPContext *_sapContext;
@property (copy, nonatomic, readonly) NSURL *_certificateURL;
@property (copy, nonatomic, readonly) ICStoreRequestContext *_requestContext;
@property (copy, nonatomic, readonly) NSURL *_setupURL;
@property (nonatomic, readonly) unsigned int sapVersion;

+ (id)sharedSAPSessionWithVersion:(unsigned int)arg1 URLBag:(id)arg2 requestContext:(id)arg3;

- (id)_initWithVersion:(unsigned int)arg1 certificateURL:(id)arg2 setupURL:(id)arg3 requestContext:(id)arg4;
- (void)signData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)verifySignatureData:(id)arg1 forData:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

@end
