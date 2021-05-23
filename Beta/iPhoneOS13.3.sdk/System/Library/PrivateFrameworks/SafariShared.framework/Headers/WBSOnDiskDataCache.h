/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSCache, NSMutableDictionary, NSMutableSet, NSString, NSURL, WBSCoalescedAsynchronousWriter;

@protocol OS_dispatch_queue, WBSDataCacheDelegate;

@interface WBSOnDiskDataCache : NSObject

{
    NSObject<OS_dispatch_queue> *_diskAccessQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSCache *_entriesForKeyStringsCache;
    NSMutableSet *_pendingKeyStringRequests;
    NSMutableSet *_missingEntryKeyStrings;
    NSMutableDictionary *_cacheSettings;
    WBSCoalescedAsynchronousWriter *_cacheSettingsWriter;
    _Bool _terminating;
    _Bool _isInMemoryCacheEnabled;
    id <WBSDataCacheDelegate> _dataCacheDelegate;
    NSURL *_cacheDirectoryURL;
}

@property (nonatomic) _Bool isInMemoryCacheEnabled;
@property (nonatomic, readonly) NSURL *cacheDirectoryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isTerminating) _Bool terminating;
@property (weak, nonatomic) id <WBSDataCacheDelegate> dataCacheDelegate;

- (id)init;
- (void)reset;
- (void)setUp;
- (id)_internalQueueName;
- (void)_internalQueueDispatchSync:(CDUnknownBlockType)arg1;
- (id)_diskAccessQueueName;
- (id)_cacheSettingsFileURL;
- (void)_notifyDidFinishSettingUp;
- (void)_internalQueueDispatchAsync:(CDUnknownBlockType)arg1;
- (void)_dispatchDiskAccessBlock:(CDUnknownBlockType)arg1;
- (id)_fileLocationForKeyString:(id)arg1;
- (void)_didLoadEntry:(id)arg1 forKeyString:(id)arg2;
- (void)_didFailToLoadEntryForKeyString:(id)arg1 error:(id)arg2;
- (long long)_internalEntryStateForKeyString:(id)arg1;
- (void)savePendingChangesBeforeTearDown;
- (id)settingForKey:(id)arg1;
- (void)setSetting:(id)arg1 forKey:(id)arg2;
- (id)requestEntryForKeyString:(id)arg1;
- (void)getEntryURLForKeyString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setEntry:(id)arg1 forKeyString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeEntriesForKeyStrings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeEntriesForKeyStringsNotIncludedIn:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)entryStateForKeyString:(id)arg1;
- (id)initWithCacheDirectoryURL:(id)arg1;

@end
