/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@interface STAskForTimeClient : NSObject

{
    NSXPCConnection *_xpcConnection;
}

@property (nonatomic, readonly) NSXPCConnection *xpcConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)handleAnswer:(long long)arg1 requestIdentifier:(id)arg2 timeApproved:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendAskForTimeRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)approveExceptionForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchLastResponseForRequestedResourceIdentifier:(id)arg1 usageType:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_asynchronousProxyWithHandler:(CDUnknownBlockType)arg1;
- (void)_synchronousProxyWithHandler:(CDUnknownBlockType)arg1;

@end
