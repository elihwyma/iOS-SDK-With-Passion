/*
 Image: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
 */

#import <Foundation/NSObject.h>

@class BSServiceConnection, NSString;

@protocol OS_dispatch_queue;

@interface UISApplicationSupportClient : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _queue_invalidated;
    BSServiceConnection *_queue_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)applicationInitializationContext;
- (void)requestPasscodeUnlockUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)destroyScenesWithPersistentIdentifiers:(id)arg1 animationType:(unsigned long long)arg2 destroySessions:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_remoteTarget;

@end
