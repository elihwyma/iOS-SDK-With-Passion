/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSObject.h>

@class NSSet, NSString, SYSession;

@protocol OS_dispatch_queue, OS_os_transaction, VCCompanionSyncSessionDelegate, VCShortcutSyncService;

@interface VCCompanionSyncSession : NSObject

{
    id <VCCompanionSyncSessionDelegate> _delegate;
    SYSession *_session;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_transaction> *_transaction;
    id <VCShortcutSyncService> _service;
    NSSet *_syncDataHandlers;
}

@property (nonatomic, readonly) SYSession *session;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSObject<OS_os_transaction> *transaction;
@property (nonatomic, readonly) id <VCShortcutSyncService> service;
@property (copy, nonatomic, readonly) NSSet *syncDataHandlers;
@property (weak, nonatomic) id <VCCompanionSyncSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)direction;

- (long long)syncSession:(id)arg1 enqueueChanges:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;
- (_Bool)syncSession:(id)arg1 resetDataStoreWithError:(id *)arg2;
- (void)resetDataStoreForSyncSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithSYSession:(id)arg1 service:(id)arg2 syncDataHandlers:(id)arg3;

@end
