/*
 Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <Foundation/NSObject.h>

@class WebBookmarksXPCConnection;

@interface WebBookmarksSettingsGateway : NSObject

{
    WebBookmarksXPCConnection *_connection;
}

- (id)init;
- (void)schedulePasswordIconsCleanup;
- (void)getSafariWebDataUsageWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteAllSafariSecurityOriginsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deleteSafariWebsiteDataRecord:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteSafariPersistentURLCacheStorageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getSafariDataUsageByteCountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)clearAllSafariHistoryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)scheduleBookmarksDatabaseMaintenance;
- (void)scheduleBookmarksDatabaseMigrationTask;
- (void)scheduleHSTSSuperCookieCleanup;

@end
