/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXImageExtraction, PXImageRequester, UIImage, UIImageView, UIView;

@protocol PXDisplayAsset, PXUIPlayButtonTileDelegate, PXVideoOverlayButton;

@interface PXUIPlayButtonTile : NSObject <Swift>

{
    UIView *_view;
    UIView<PXVideoOverlayButton> *_hifiPlayButtonView;
    UIView<PXVideoOverlayButton> *_playButtonView;
    UIImageView *_playButtonBackgroundImageView;
    PXImageExtraction *_imageExtraction;
    id <PXDisplayAsset> _assetForImageExtraction;
    struct {
        _Bool backgroundImage;
        _Bool playButton;
    } _needsUpdate;
    _Bool _isPerformingChanges;
    _Bool _allowsBackdropStatisticsSuppression;
    _Bool __animatingGeometry;
    id <PXUIPlayButtonTileDelegate> _delegate;
    long long _playButtonStyle;
    PXImageRequester *_imageRequester;
    long long __style;
    unsigned long long __animationCount;
    UIImage *__backgroundImage;
    struct CGSize _playButtonSize;
    struct CGPoint _imageViewportLocation;
}

@property (nonatomic, setter=_setStyle:) long long _style;
@property (nonatomic, getter=_isAnimatingGeometry, setter=_setAnimatingGeometry:) _Bool _animatingGeometry;
@property (nonatomic, setter=_setAnimationCount:) unsigned long long _animationCount;
@property (retain, nonatomic, setter=_setBackgroundImage:) UIImage *_backgroundImage;
@property (weak, nonatomic) id <PXUIPlayButtonTileDelegate> delegate;
@property (nonatomic, readonly) struct CGSize playButtonSize;
@property (nonatomic, readonly) long long playButtonStyle;
@property (nonatomic, readonly) PXImageRequester *imageRequester;
@property (nonatomic, readonly) struct CGPoint imageViewportLocation;
@property (nonatomic, readonly) _Bool allowsBackdropStatisticsSuppression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *view;

+ (struct CGSize)preferredSize;

- (id)init;
- (void)prepareForReuse;
- (_Bool)_needsUpdate;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)_invalidateBackgroundImage;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateIfNeeded;
- (void)willAnimateToGeometry:(struct PXTileGeometry)arg1 toUserData:(id)arg2 withOptions:(id)arg3;
- (void)didAnimateToGeometry:(struct PXTileGeometry)arg1 toUserData:(id)arg2 withOptions:(id)arg3;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)setImageRequester:(id)arg1;
- (void)becomeReusable;
- (void)setPlayButtonSize:(struct CGSize)arg1;
- (void)setPlayButtonStyle:(long long)arg1;
- (void)setImageViewportLocation:(struct CGPoint)arg1;
- (void)setAllowsBackdropStatisticsSuppression:(_Bool)arg1;
- (void)_resetHifiPlayButton;
- (void)_invalidatePlayButton;
- (void)_updatePlayButtonViewIfNeeded;
- (void)_updateBackgroundImageIfNeeded;
- (void)_handleExtractionResult:(id)arg1 isPlaceholder:(_Bool)arg2 extraction:(id)arg3;
- (void)didTapButton:(id)arg1;

@end
