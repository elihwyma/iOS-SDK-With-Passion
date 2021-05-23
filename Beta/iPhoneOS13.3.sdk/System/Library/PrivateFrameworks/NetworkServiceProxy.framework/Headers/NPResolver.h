/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <Network/NWResolver.h>

@class NSObject;

@protocol OS_dispatch_source;

@interface NPResolver : NWResolver

{
    CDUnknownBlockType _resolveCompletionHandler;
    NSObject<OS_dispatch_source> *_resolveTimer;
}

@property (copy) CDUnknownBlockType resolveCompletionHandler;
@property (retain) NSObject<OS_dispatch_source> *resolveTimer;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)resolveWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
