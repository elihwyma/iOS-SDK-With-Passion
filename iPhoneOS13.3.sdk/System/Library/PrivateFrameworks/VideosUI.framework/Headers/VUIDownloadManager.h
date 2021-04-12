//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/TVPDownloadDelegate-Protocol.h>
#import <VideosUI/TVPDownloadSessionDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSPointerArray;

@interface VUIDownloadManager : NSObject <TVPDownloadDelegate, TVPDownloadSessionDelegate>
{
    BOOL _dialogBeingPresented;
    NSMutableArray *_mutableDownloads;
    NSMutableArray *_failedDownloadsNeedingDialog;
    NSPointerArray *_delegates;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSPointerArray *delegates; // @synthesize delegates=_delegates;
@property(nonatomic) BOOL dialogBeingPresented; // @synthesize dialogBeingPresented=_dialogBeingPresented;
@property(retain, nonatomic) NSMutableArray *failedDownloadsNeedingDialog; // @synthesize failedDownloadsNeedingDialog=_failedDownloadsNeedingDialog;
@property(retain, nonatomic) NSMutableArray *mutableDownloads; // @synthesize mutableDownloads=_mutableDownloads;
// - (void).cxx_destruct;
- (void)_activeAccountDidChange:(id)arg1;
- (void)_loadImageForImageInfoManagedObject:(id)arg1 imageType:(NSUInteger)arg2;
- (void)_loadImageForSeriesManagedObject:(id)arg1 imageType:(NSUInteger)arg2;
- (void)_loadImageForVideoManagedObject:(id)arg1 imageType:(NSUInteger)arg2;
- (id)_alertControllerForFailedDownloads:(id)arg1;
- (void)_showDownloadErrorDialogIfAppropriate;
- (void)_isPlaybackUIBeingShownDidChange:(id)arg1;
- (void)_notifyDelegatesThatDownloadsDidChange;
- (void)downloadSession:(id)arg1 didAddRestoredDownloads:(id)arg2;
- (void)download:(id)arg1 didReceiveTaskIdentifier:(id)arg2;
- (void)download:(id)arg1 willDownloadToURL:(id)arg2;
- (void)download:(id)arg1 didChangeStateTo:(long long)arg2;
@property(readonly, nonatomic) NSArray *downloads;
- (void)cancelDownloadForCanonicalID:(id)arg1;
- (id)existingDownloadForCanonicalID:(id)arg1;
- (void)addDownloadForVideoManagedObject:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)initializeDownloadManager;
- (void)dealloc;
- (id)init;

@end

