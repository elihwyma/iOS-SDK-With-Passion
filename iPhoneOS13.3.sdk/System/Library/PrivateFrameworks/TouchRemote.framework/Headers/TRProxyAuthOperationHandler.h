//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchRemote/TROperationHandler-Protocol.h>

@interface TRProxyAuthOperationHandler : NSObject <TROperationHandler>
{
    id /* CDUnknownBlockType */ _proxyAuthHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ proxyAuthHandler; // @synthesize proxyAuthHandler=_proxyAuthHandler;
// - (void).cxx_destruct;
- (void)_handleProxyAuthenticationRequest:(id)arg1 withResponseHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_handleProxyDeviceRequest:(id)arg1 withResponseHandler:(id /* CDUnknownBlockType */)arg2;
- (void)registerMessageHandlersForSession:(id)arg1;
- (id)initWithProxyAuthHandler:(id /* CDUnknownBlockType */)arg1;

@end

