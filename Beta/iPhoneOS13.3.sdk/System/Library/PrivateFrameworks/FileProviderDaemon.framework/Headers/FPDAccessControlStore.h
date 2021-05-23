/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@class NSURL, PQLConnection;

@protocol OS_dispatch_queue;

@interface FPDAccessControlStore : NSObject

{
    PQLConnection *_dbConnection;
    NSURL *_databaseBaseURL;
    _Bool _dbIsOpen;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;

+ (id)sharedStore;

- (id)init;
- (void)dealloc;
- (void)openDatabase;
- (_Bool)isProviderIdentifier:(id)arg1 allowedToProvideItemID:(id)arg2 toConsumerWithIdentifier:(id)arg3;
- (id)initWithDatabaseBaseURL:(id)arg1;
- (id)_bundleKeyForBundleIdentifier:(id)arg1 db:(id)arg2 create:(_Bool)arg3;
- (id)_fileKeyForProviderKey:(id)arg1 domain:(id)arg2 identifier:(id)arg3 db:(id)arg4 create:(_Bool)arg5;
- (void)validateDatabase:(id)arg1;
- (_Bool)migrate:(id)arg1 fromLegacyDatabase:(id)arg2;
- (_Bool)isProviderWithIdentifier:(id)arg1 allowedToProvideItemID:(id)arg2 toConsumerWithIdentifier:(id)arg3;
- (void)performWithDBConnection:(CDUnknownBlockType)arg1;
- (void)allowProviderWithIdentifier:(id)arg1 toProvideItemID:(id)arg2 toConsumerWithIdentifier:(id)arg3;
- (void)disallowProviderWithIdentifier:(id)arg1 fromProvidingItemWithID:(id)arg2 toConsumerWithIdentifier:(id)arg3;
- (void)reopenDatabaseAfterUnlock;
- (id)dumpForBundleIdentifier:(id)arg1;

@end
