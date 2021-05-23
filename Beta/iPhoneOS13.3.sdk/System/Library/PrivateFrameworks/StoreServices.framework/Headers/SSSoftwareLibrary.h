/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class SSXPCConnection;

@interface SSSoftwareLibrary : NSObject

{
    SSXPCConnection *_connection;
}

- (id)init;
- (void)getLibraryItemForBundleIdentifiers:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_sendDemotionMessage:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_getItemsWithMessage:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)demoteApplicationWithBundleIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getLibraryItemsForITunesStoreItemIdentifiers:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getRemovableSytemApplicationsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)hasDemotedApplicationsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)isInstalledApplicationWithBundleIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)isRemovedSystemApplicationWithBundleIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)playableApplicationsWithBundleIdentifiers:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)refreshReceiptsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)restoreAllDemotedApplicationsWithOptions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)restoreDemotedApplicationWithBundleIdentifier:(id)arg1 options:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)restoreRemovedSystemApplicationWithBundleIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
