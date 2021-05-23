/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSPointerArray, NSString;

@interface VUIDownloadManager : NSObject

{
    _Bool _dialogBeingPresented;
    NSMutableArray *_mutableDownloads;
    NSMutableArray *_failedDownloadsNeedingDialog;
    NSPointerArray *_delegates;
}

@property (retain, nonatomic) NSMutableArray *mutableDownloads;
@property (retain, nonatomic) NSMutableArray *failedDownloadsNeedingDialog;
@property (nonatomic) _Bool dialogBeingPresented;
@property (retain, nonatomic) NSPointerArray *delegates;
@property (nonatomic, readonly) NSArray *downloads;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)addDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)download:(id)arg1 willDownloadToURL:(id)arg2;
- (void)download:(id)arg1 didChangeStateTo:(long long)arg2;
- (void)download:(id)arg1 didReceiveTaskIdentifier:(id)arg2;
- (void)downloadSession:(id)arg1 didAddRestoredDownloads:(id)arg2;
- (void)_activeAccountDidChange:(id)arg1;
- (void)initializeDownloadManager;
- (id)existingDownloadForCanonicalID:(id)arg1;
- (void)addDownloadForVideoManagedObject:(id)arg1;
- (void)cancelDownloadForCanonicalID:(id)arg1;
- (void)_isPlaybackUIBeingShownDidChange:(id)arg1;
- (void)_notifyDelegatesThatDownloadsDidChange;
- (void)_loadImageForVideoManagedObject:(id)arg1 imageType:(unsigned long long)arg2;
- (void)_loadImageForSeriesManagedObject:(id)arg1 imageType:(unsigned long long)arg2;
- (void)_showDownloadErrorDialogIfAppropriate;
- (id)_alertControllerForFailedDownloads:(id)arg1;
- (void)_loadImageForImageInfoManagedObject:(id)arg1 imageType:(unsigned long long)arg2;

@end
