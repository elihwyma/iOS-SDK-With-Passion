/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@protocol EDConversationRemoteStorage, EDUbiquitousConversationManagerDelegate, OS_dispatch_queue;

@interface EDUbiquitousConversationManager : NSObject

{
    _Bool _initialized;
    id <EDUbiquitousConversationManagerDelegate> _delegate;
    id <EDConversationRemoteStorage> _cloudStorage;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_conversationIDsBySyncKey;
    NSMutableSet *_unmatchedKeys;
}

@property (weak, nonatomic) id <EDUbiquitousConversationManagerDelegate> delegate;
@property (retain, nonatomic) id <EDConversationRemoteStorage> cloudStorage;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *conversationIDsBySyncKey;
@property (retain, nonatomic) NSMutableSet *unmatchedKeys;
@property (nonatomic) _Bool initialized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (id)initWithDelegate:(id)arg1;
- (_Bool)_synchronize;
- (void)performDailyExportForChangedConversations:(id)arg1;
- (void)conversationRemoteStorage:(id)arg1 didChangeEntries:(id)arg2 reason:(long long)arg3;
- (void)performInitialSync;
- (id)syncKeyForUpdatedConversation:(long long)arg1 flags:(unsigned long long)arg2;
- (void)setFlags:(unsigned long long)arg1 forConversations:(id)arg2;
- (_Bool)hasSubscribedConversations;
- (void)pruneDatabasePurgingOldestEntries:(_Bool)arg1;
- (id)_syncKeyForConversationID:(long long)arg1;
- (void)_setCloudStorageValue:(id)arg1 forKey:(id)arg2;
- (void)_mergeServerChanges:(id)arg1;

@end
