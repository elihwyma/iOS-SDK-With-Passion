/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface ICInAppMessageStore : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_messageEntryCache;
    NSMutableDictionary *_globalPropertyCache;
    NSMutableDictionary *_applicationPropertyCache;
    NSMutableDictionary *_messageMetadataCache;
    NSMutableArray *_pendingEvents;
    NSString *_filePath;
}

- (id)init;
- (void)_load;
- (void)_commit;
- (id)initWithFilePath:(id)arg1;
- (void)updateStoreProperty:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getStorePropertyForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAllMessageEntriesWithCompletion:(CDUnknownBlockType)arg1;
- (void)getAllMessageEntriesForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addMessageEntry:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateMessageEntry:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeMessageEntryWithIdentifier:(id)arg1 forBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeAllMessageEntriesForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetStoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)addPendingMessageEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removePendingMessageEventWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pendingMessageEventsWithCompletion:(CDUnknownBlockType)arg1;
- (void)getMetadataForMessageIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getAllMetadataForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateMetadata:(id)arg1 messageIdentifier:(id)arg2 bundleIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeMetadataForMessageIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getStorePropertyForKey:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateStoreProperty:(id)arg1 forKey:(id)arg2 bundleIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeAllMetadataForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)allStorePropertiesWithCompletion:(CDUnknownBlockType)arg1;
- (void)getMessageEntryWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_defaultStoreFilePath;
- (void)allApplicationStorePropertiesWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeMessageEntry:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
