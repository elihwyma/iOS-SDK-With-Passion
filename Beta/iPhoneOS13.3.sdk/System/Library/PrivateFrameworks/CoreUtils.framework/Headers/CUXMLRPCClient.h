/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

#import <CoreUtils/Swift-Protocol.h>

@class NSMutableDictionary, NSString, NSURLSession;

@protocol OS_dispatch_queue;

@interface CUXMLRPCClient : NSObject <Swift>

{
    NSMutableDictionary *_tasks;
    struct LogCategory *_ucat;
    NSURLSession *_urlSession;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_activate;
- (void)invalidate;
- (void)_invalidate;
- (void)activate;
- (void)requestURL:(id)arg1 methodName:(id)arg2 params:(id)arg3 httpHeaders:(id)arg4 identifier:(id *)arg5 responseHandler:(CDUnknownBlockType)arg6;
- (void)_requestURL:(id)arg1 methodName:(id)arg2 params:(id)arg3 httpHeaders:(id)arg4 identifier:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;
- (void)_handleResponse:(id)arg1 data:(id)arg2 error:(id)arg3 identifier:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;

@end
