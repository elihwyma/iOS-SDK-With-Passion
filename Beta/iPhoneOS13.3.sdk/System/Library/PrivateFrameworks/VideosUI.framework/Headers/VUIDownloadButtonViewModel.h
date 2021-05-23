/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, VUIVideosPlayable;

@protocol VUIMediaEntityAssetController;

__attribute__((visibility("hidden")))
@interface VUIDownloadButtonViewModel : NSObject

{
    VUIVideosPlayable *_videosPlayable;
    unsigned long long _downloadState;
    double _downloadProgress;
    NSObject<VUIMediaEntityAssetController> *_assetController;
    NSString *_downloadStateStringValue;
    NSArray *_downloadStateToString;
}

@property (nonatomic) unsigned long long downloadState;
@property (retain, nonatomic) NSString *downloadStateStringValue;
@property (nonatomic) double downloadProgress;
@property (retain, nonatomic) VUIVideosPlayable *videosPlayable;
@property (retain, nonatomic) NSArray *downloadStateToString;
@property (retain, nonatomic) NSObject<VUIMediaEntityAssetController> *assetController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)startDownload;
- (void)resumeDownload;
- (void)mediaEntityAssetController:(id)arg1 stateDidChange:(id)arg2;
- (void)pauseDownload;
- (void)_getAssetControllerCreatingMediaItem:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_createDownloadStateToStringArrayMap;
- (void)_updateDownloadStateFromAssetControllerState:(id)arg1;
- (unsigned long long)_downloadStateFromAssetsControllerStatus:(unsigned long long)arg1;
- (id)initWithVideosPlayable:(id)arg1;
- (id)initWithAssetController:(id)arg1;
- (void)stopDownload;
- (void)deleteDownload;
- (void)preflightPresentingViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
