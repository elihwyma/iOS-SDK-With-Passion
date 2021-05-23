/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGridInlinePlaybackController.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXCuratedLibraryLayout, PXCuratedLibraryViewModel;

@interface PXCuratedLibraryVideoPlaybackController : PXGridInlinePlaybackController <Swift>

{
    PXCuratedLibraryViewModel *_viewModel;
    long long _presentedZoomLevel;
    long long _newZoomLevel;
    PXCuratedLibraryLayout *_curatedLibraryLayout;
}

@property (retain, nonatomic) PXCuratedLibraryLayout *curatedLibraryLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)enumerateRectDiagnosticsForLayout:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)pixelBufferSourceForDisplayAsset:(id)arg1 mediaProvider:(id)arg2 spriteReference:(id)arg3;
- (void)recyclePixelBufferSourceForDisplayAssets:(id)arg1;
- (id)initViewViewModel:(id)arg1;
- (id)createPlaybackRecordForDisplayAsset:(id)arg1 mediaProvider:(id)arg2 geometryReference:(id)arg3;
- (struct CGRect)currentVisibleRect;
- (_Bool)canUpdatePlayingRecords;
- (void)didUpdatePlayingRecords;
- (id)filterSortedRecordsToPlay:(id)arg1;
- (struct CGRect)frameForPlaybackRecord:(id)arg1 minPlayableSize:(out struct CGSize *)arg2;
- (_Bool)canProvideGeometriesForRecords;
- (_Bool)shouldEnablePlayback;
- (_Bool)canPlayAsset:(id)arg1;
- (_Bool)_canPlayVideosInZoomLevel:(long long)arg1;

@end
