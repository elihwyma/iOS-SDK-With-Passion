/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUILibraryMediaItem_iOS.h>

@class HSHomeSharingLibrary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VUIHomeSharingMediaItem_iOS : VUILibraryMediaItem_iOS

{
    _Bool _needsKeyBagSyncPriorToPlayback;
    HSHomeSharingLibrary *_homeSharingLibrary;
    NSURL *_mediaItemURLInternal;
    NSString *_keyBagFilePath;
    unsigned long long _loadingContext;
}

@property (retain, nonatomic) HSHomeSharingLibrary *homeSharingLibrary;
@property (retain, nonatomic) NSURL *mediaItemURLInternal;
@property (retain, nonatomic) NSString *keyBagFilePath;
@property (nonatomic) _Bool needsKeyBagSyncPriorToPlayback;
@property (nonatomic) unsigned long long loadingContext;

+ (void)initialize;

- (id)imageLoader;
- (id)mediaItemURL;
- (id)initWithMPMediaItem:(id)arg1;
- (id)mediaItemMetadataForProperty:(id)arg1;
- (_Bool)hasTrait:(id)arg1;
- (void)prepareForLoadingWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)shouldRetryPlaybackForError:(id)arg1;
- (void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(_Bool)arg4;
- (void)updatePlayCountForElapsedTime:(double)arg1 duration:(double)arg2;
- (void)cleanUpMediaItem;
- (_Bool)_loadingCancelled:(unsigned long long)arg1;
- (void)_fetchKeybagForDSID:(id)arg1 isFamilyAccount:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end
