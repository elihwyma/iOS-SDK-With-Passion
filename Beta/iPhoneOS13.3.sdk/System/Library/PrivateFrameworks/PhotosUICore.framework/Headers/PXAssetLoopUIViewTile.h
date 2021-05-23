/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXImageRequester, PXVideoSession, PXVideoSessionUIView, UIView, _PXAssetLoopUIView;

@interface PXAssetLoopUIViewTile : NSObject <Swift>

{
    unsigned long long _requestCount;
    _PXAssetLoopUIView *_view;
    PXVideoSession *_videoSession;
    PXVideoSessionUIView *_videoView;
    PXImageRequester *_imageRequester;
    double _cornerRadius;
    long long _desiredPlayState;
    struct CGSize _contentSize;
    struct CGRect _desiredContentsRect;
    CDStruct_e83c9415 _bestPlaybackTimeRange;
}

@property (retain, nonatomic) PXVideoSession *videoSession;
@property (nonatomic) struct CGRect desiredContentsRect;
@property (nonatomic) struct CGSize contentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) PXImageRequester *imageRequester;
@property (nonatomic) double cornerRadius;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic) long long desiredPlayState;
@property (nonatomic) CDStruct_e83c9415 bestPlaybackTimeRange;

- (id)init;
- (void)dealloc;
- (void)prepareForReuse;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)becomeReusable;
- (void)_updateLayer;
- (void)_updateImageRequester;
- (void)_updateVideoSession;
- (void)_reloadVideoSessionIfNecessary;

@end
