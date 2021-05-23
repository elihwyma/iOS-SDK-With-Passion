/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSString, NSUbiquitousKeyValueStore;

@protocol EDConversationRemoteStorageDelegate, OS_dispatch_queue;

@interface EDConversationRemoteKVSStorage : NSObject

{
    _Bool _initialized;
    id <EDConversationRemoteStorageDelegate> _delegate;
    NSUbiquitousKeyValueStore *_kvStore;
    NSObject<OS_dispatch_queue> *_privateQueue;
}

@property (weak, nonatomic) id <EDConversationRemoteStorageDelegate> delegate;
@property (retain, nonatomic) NSUbiquitousKeyValueStore *kvStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue;
@property (nonatomic, getter=isInitialized) _Bool initialized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (_Bool)synchronize;
- (_Bool)initialized;
- (id)dictionaryRepresentation;
- (id)dictionaryForKey:(id)arg1;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (void)refresh;
- (id)initWithDelegate:(id)arg1;
- (void)_storeChangedExternally:(id)arg1;
- (void)removeDictionaryForKey:(id)arg1;
- (id)storageName;
- (id)subsetOfMessageIDsToSyncFromMessageIDString:(id)arg1;

@end
