/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <Foundation/NSObject.h>

@class NSString, TRCompanionAuthOperationHandler, TRProxyAuthOperationHandler;

@interface TRAuthenticationOperationHandler : NSObject

{
    TRCompanionAuthOperationHandler *_companionAuthHandler;
    TRProxyAuthOperationHandler *_proxyAuthHandler;
}

@property (retain, nonatomic) TRCompanionAuthOperationHandler *companionAuthHandler;
@property (retain, nonatomic) TRProxyAuthOperationHandler *proxyAuthHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)registerMessageHandlersForSession:(id)arg1;
- (id)initWithCompanionAuthHandler:(CDUnknownBlockType)arg1 proxyAuthHandler:(CDUnknownBlockType)arg2;

@end
