/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class IDSService, NSString;

@protocol DNDSSyncServiceDelegate, OS_dispatch_queue;

@interface DNDSIDSSyncService : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    IDSService *_syncService;
    id <DNDSSyncServiceDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <DNDSSyncServiceDelegate> delegate;

- (void)resume;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (id)initWithIDSService:(id)arg1;
- (void)sendMessage:(id)arg1 withVersionNumber:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_queue_resume;
- (_Bool)_queue_sendMessage:(id)arg1 withVersionNumber:(unsigned long long)arg2 error:(id *)arg3;
- (void)_queue_handleIncomingMessage:(id)arg1 deviceIdentifier:(id)arg2;

@end
