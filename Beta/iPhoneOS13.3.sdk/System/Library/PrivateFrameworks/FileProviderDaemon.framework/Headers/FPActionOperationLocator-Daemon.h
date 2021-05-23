/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <FileProvider/FPActionOperationLocator.h>

@interface FPActionOperationLocator (Daemon)

@property (nonatomic, readonly) _Bool isDownloaded;

+ (_Bool)_isMoveAcrossZonesOrSharedRootsForSource:(id)arg1 destination:(id)arg2;

- (_Bool)willRequireDownloadForSourceItem:(id)arg1 extensionManager:(id)arg2;
- (unsigned long long)materializeOptionForDestinationItem:(id)arg1 recursively:(_Bool)arg2 isCopy:(_Bool)arg3 extensionManager:(id)arg4;
- (id)materializedURLWithExtensionManager:(id)arg1;
- (id)materializedURLWithDomain:(id)arg1;

@end
