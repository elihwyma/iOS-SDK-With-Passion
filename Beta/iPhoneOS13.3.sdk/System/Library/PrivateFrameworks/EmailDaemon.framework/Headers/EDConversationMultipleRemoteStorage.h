/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDConversationRemoteCloudKitStorage, EDTransactionService, NSString;

@protocol EDConversationRemoteStorage, EDConversationRemoteStorageDelegate, OS_dispatch_queue;

@interface EDConversationMultipleRemoteStorage : NSObject

{
    id <EDConversationRemoteStorageDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_privateQueue;
    id <EDConversationRemoteStorage> _kvsStorage;
    EDConversationRemoteCloudKitStorage *_cloudKitStorage;
    EDTransactionService *_dataReplicationTransaction;
}

@property (weak, nonatomic) id <EDConversationRemoteStorageDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue;
@property (retain, nonatomic) id <EDConversationRemoteStorage> kvsStorage;
@property (retain, nonatomic) EDConversationRemoteCloudKitStorage *cloudKitStorage;
@property (retain, nonatomic) EDTransactionService *dataReplicationTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (_Bool)synchronize;
- (id)dictionaryRepresentation;
- (id)dictionaryForKey:(id)arg1;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (void)refresh;
- (id)initWithDelegate:(id)arg1;
- (_Bool)isInitialized;
- (void)removeDictionaryForKey:(id)arg1;
- (void)_saveChanges:(id)arg1 fromStorage:(id)arg2 toStorage:(id)arg3 synchronize:(_Bool)arg4;
- (void)conversationRemoteStorage:(id)arg1 didChangeEntries:(id)arg2 reason:(long long)arg3;
- (void)_replicateAllContentFromStore:(id)arg1 toStore:(id)arg2 synchronize:(_Bool)arg3;
- (void)_handleStorageReady:(id)arg1;
- (void)conversationRemoteStorageDidInitialize:(id)arg1;
- (void)conversationRemoteStorageWillResetData:(id)arg1;
- (void)conversationRemoteStorageDidResetData:(id)arg1;
- (id)storageName;

@end
