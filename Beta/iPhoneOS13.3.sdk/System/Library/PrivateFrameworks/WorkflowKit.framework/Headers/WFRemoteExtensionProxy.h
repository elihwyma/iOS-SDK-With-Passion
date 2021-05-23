/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class INCExtensionConnection, SARemoteDevice;

@interface WFRemoteExtensionProxy : NSObject

{
    INCExtensionConnection *_connection;
    SARemoteDevice *_remoteDevice;
}

@property (nonatomic, readonly) INCExtensionConnection *connection;
@property (copy, nonatomic, readonly) SARemoteDevice *remoteDevice;
@property (copy, nonatomic) CDUnknownBlockType backgroundAppHandler;

- (void)confirmIntentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleIntentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resolveIntentSlotKeyPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resolveIntentSlotKeyPaths:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithConnection:(id)arg1 andDevice:(id)arg2;
- (void)handleIntentRemotelyWithRemoteOperation:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
