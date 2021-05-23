/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKImageBalloonView.h>

@class PHLivePhoto, PHLivePhotoView;

@interface CKLivePhotoBalloonView : CKImageBalloonView

{
    _Bool _isIrisAsset;
    PHLivePhotoView *_livePhotoView;
    PHLivePhoto *_livePhoto;
}

@property (retain, nonatomic) PHLivePhotoView *livePhotoView;
@property (retain, nonatomic) PHLivePhoto *livePhoto;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)isIrisAsset;
- (void)setIsIrisAsset:(_Bool)arg1;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;

@end
