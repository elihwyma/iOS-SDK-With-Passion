/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSMutableDictionary, NSMutableSet, NSString, SBApplicationController, SBApplicationLibraryObserver;

@interface SBApplicationPlaceholderController : NSObject

{
    SBApplicationController *_appController;
    SBApplicationLibraryObserver *_lsWorkspaceObserver;
    NSMutableDictionary *_placeholdersByBundleID;
    NSMutableSet *_pendingAdded;
    NSMutableSet *_pendingInstalled;
    NSMutableSet *_pendingCancelled;
    NSCountedSet *_removingPlaceholderProxies;
    _Bool _hasDownloadedFromStore;
    _Bool _usingNetwork;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (_Bool)isUsingNetwork;
- (void)iconAccessoriesDidUpdate:(id)arg1;
- (id)placeholderForDisplayID:(id)arg1;
- (_Bool)hasDownloadedStoreApplication;
- (id)placeholdersByDisplayID;
- (void)applicationPlaceholdersAdded:(id)arg1;
- (void)applicationPlaceholdersCancelled:(id)arg1;
- (void)applicationPlaceholdersInstalled:(id)arg1;
- (void)applicationPlaceholdersNetworkUsageChanged:(_Bool)arg1;
- (_Bool)placeholderShouldAllowPausing:(id)arg1;
- (void)placeholderWantsUninstall:(id)arg1;
- (void)_processPendingProxies;
- (void)_addPlaceholders:(id)arg1;
- (void)_removePlaceholders:(id)arg1 forInstall:(_Bool)arg2;
- (void)_postPlaceholdersDidChangeForAdded:(id)arg1 modified:(id)arg2 removed:(id)arg3;
- (void)_finishPlaceholder:(id)arg1;

@end
