/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSOperation.h>

@class CKDClientContext, CKDClientProxy;

__attribute__((visibility("hidden")))
@interface CKDProxySetupOperation : NSOperation

{
    _Bool _isFinished;
    _Bool _isExecuting;
    CKDClientProxy *_proxy;
    CKDClientContext *_context;
}

@property (weak, nonatomic) CKDClientProxy *proxy;
@property (weak, nonatomic) CKDClientContext *context;
@property (nonatomic) _Bool isExecuting;
@property (nonatomic) _Bool isFinished;

+ (id)operationWithProxy:(id)arg1 context:(id)arg2;

- (void)start;
- (_Bool)isAsynchronous;
- (void)_setIsExecuting:(_Bool)arg1;
- (void)_setIsFinished:(_Bool)arg1;
- (id)initWithProxy:(id)arg1 context:(id)arg2;
- (void)_markFinished;

@end
