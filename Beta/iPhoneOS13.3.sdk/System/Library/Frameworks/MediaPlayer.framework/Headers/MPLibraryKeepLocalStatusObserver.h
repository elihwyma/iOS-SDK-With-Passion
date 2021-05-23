/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPLibraryKeepLocalStatusObserverConfiguration, NSSet, NSString;

@interface MPLibraryKeepLocalStatusObserver : NSObject

{
    NSSet *_activeDownloads;
    NSSet *_pausedDownloads;
    MPLibraryKeepLocalStatusObserverConfiguration *_configuration;
    unsigned long long _downloadPausedReason;
    CDUnknownBlockType _statusBlock;
    struct MPLibraryActiveKeepLocalStatus _currentStatus;
}

@property (retain, nonatomic) MPLibraryKeepLocalStatusObserverConfiguration *configuration;
@property (nonatomic, readonly) struct MPLibraryActiveKeepLocalStatus currentStatus;
@property (nonatomic, readonly) unsigned long long downloadPausedReason;
@property (copy, nonatomic) CDUnknownBlockType statusBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)downloadManager:(id)arg1 didEnqueueAssetDownloads:(id)arg2 didRemoveAssetDownloads:(id)arg3;
- (void)downloadManager:(id)arg1 didUpdateDownloadProgress:(id)arg2;
- (void)downloadManager:(id)arg1 didChangeDownloadPausedReasonForAssets:(id)arg2;
- (void)_transientStateDidChangeNotification:(id)arg1;
- (void)_handleDownloadStateChanged:(id)arg1;
- (id)_pausedDownloadForIdentifierSet:(id)arg1;
- (id)_activeDownloadForIdentifierSet:(id)arg1;
- (struct MPLibraryActiveKeepLocalStatus)_calculateCurrentStatus;
- (_Bool)_updateActiveDownloadsAllowingDownloadRemoval:(_Bool)arg1;
- (void)_updateCurrentStatus;

@end
