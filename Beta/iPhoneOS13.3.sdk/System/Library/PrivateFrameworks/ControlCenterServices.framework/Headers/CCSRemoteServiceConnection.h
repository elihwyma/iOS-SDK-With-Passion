/*
 Image: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface CCSRemoteServiceConnection : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void)requestEnableModuleWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestAvailableModuleIdentifiersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getEnabledStateOfModuleWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentModuleWithIdentifier:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
