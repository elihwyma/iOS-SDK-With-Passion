/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class ISLivePhotoPlayer, ISLivePhotoUIView, ISPlayerItem, NSString, PXImageRequester, UIView;

@interface PXAssetLivePhotoUIViewTile : NSObject <Swift>

{
    unsigned long long _requestCount;
    long long _livePhotoRequestID;
    ISLivePhotoUIView *_livePhotoView;
    ISLivePhotoPlayer *_livePhotoPlayer;
    PXImageRequester *_imageRequester;
    double _cornerRadius;
    ISPlayerItem *__playerItem;
}

@property (retain, nonatomic, setter=_setPlayerItem:) ISPlayerItem *_playerItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) PXImageRequester *imageRequester;
@property (nonatomic) double cornerRadius;
@property (nonatomic, readonly) UIView *view;

- (void)prepareForReuse;
- (struct CGSize)_targetSize;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)becomeReusable;
- (void)_updateLivePhotoView;
- (void)_requestLivePhotoIfNeeded;
- (void)_handleLivePhotoResult:(id)arg1 info:(id)arg2 expectedRequestCount:(unsigned long long)arg3 expectedRequestID:(long long)arg4;

@end
