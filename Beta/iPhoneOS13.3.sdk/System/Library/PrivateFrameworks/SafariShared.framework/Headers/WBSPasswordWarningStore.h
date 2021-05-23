/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSURL;

@protocol OS_dispatch_queue;

@interface WBSPasswordWarningStore : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _suddenTerminationDisabler;
    _Bool _hasPendingChanges;
    NSURL *_backingStoreURL;
    NSMutableDictionary *_lastWarningDatesByPersistentIdentifier;
}

+ (id)sharedStore;

- (id).cxx_construct;
- (id)_initWithBackingStoreURL:(id)arg1;
- (id)_initWithDefaultBackingStore;
- (void)_saveStoreSoon;
- (void)_saveStoreNow;
- (void)_loadStoreIfNecessary;
- (void)_addPersistentIdentifier:(id)arg1 withLastWarningDate:(id)arg2;
- (void)saveStoreSynchronously;
- (void)getContainsPersistentIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addPersistentIdentifier:(id)arg1;
- (void)clearStoreSynchronously;
- (void)synchronousyClearIdentifiersAddedAfterDate:(id)arg1;

@end
