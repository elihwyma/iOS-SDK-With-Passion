/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSOperationQueue.h>

@class CKDClientProxy;

__attribute__((visibility("hidden")))
@interface CKDProxyOperationQueue : NSOperationQueue

{
    CKDClientProxy *_proxy;
}

@property (weak, nonatomic) CKDClientProxy *proxy;

- (void)addOperation:(id)arg1;
- (id)initWithProxy:(id)arg1;

@end
