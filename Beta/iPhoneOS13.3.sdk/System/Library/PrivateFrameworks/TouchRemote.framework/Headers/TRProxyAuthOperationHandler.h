/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TRProxyAuthOperationHandler : NSObject

{
    CDUnknownBlockType _proxyAuthHandler;
}

@property (copy, nonatomic) CDUnknownBlockType proxyAuthHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)registerMessageHandlersForSession:(id)arg1;
- (void)_handleProxyDeviceRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)_handleProxyAuthenticationRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (id)initWithProxyAuthHandler:(CDUnknownBlockType)arg1;

@end
