/*
 Image: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface SOServiceConnection : NSObject

{
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain) NSXPCConnection *xpcConnection;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)configurationWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_connectToService;
- (void)beginAuthorizationWithRequestParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelAuthorizationWithCompletion:(CDUnknownBlockType)arg1;
- (void)debugHintsWithCompletion:(CDUnknownBlockType)arg1;
- (void)getAuthorizationHintsWithURL:(id)arg1 responseCode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performAuthorizationWithRequestParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)realmsWithCompletion:(CDUnknownBlockType)arg1;
- (void)isExtensionProcessWithAuditToken:(CDStruct_6ad76789)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_doConnectWithOptions:(unsigned long long)arg1;

@end
