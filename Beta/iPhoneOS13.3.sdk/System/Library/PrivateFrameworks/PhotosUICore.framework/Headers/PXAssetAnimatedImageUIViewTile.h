/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class ISAnimatedImageView, NSString, PHAnimatedImage, PXImageRequester, UIView;

@interface PXAssetAnimatedImageUIViewTile : NSObject <Swift>

{
    ISAnimatedImageView *_animatedImageView;
    long long _animatedImageRequestID;
    unsigned long long _requestCount;
    PXImageRequester *_imageRequester;
    double _cornerRadius;
    long long _desiredPlayState;
    PHAnimatedImage *__animatedImage;
    CDStruct_e83c9415 _bestPlaybackTimeRange;
}

@property (retain, nonatomic, setter=_setAnimatedImage:) PHAnimatedImage *_animatedImage;
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
- (void)prepareForReuse;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)becomeReusable;
- (void)_updateAnimatedImageView;
- (void)_requestAnimatedImageIfNeeded;
- (void)_handleAnimatedImageResult:(id)arg1 info:(id)arg2 expectedRequestCount:(unsigned long long)arg3;

@end
