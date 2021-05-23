/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIImageView.h>

@class CAShapeLayer, CNMonogrammer, NSObject, PHAssetCollection, UIGraphicsImageRenderer, UIImage;

@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface PUSharedAlbumAvatarView : UIImageView

{
    _Bool _isRTL;
    _Bool _enabled;
    PHAssetCollection *_sharedAlbumCollection;
    CNMonogrammer *_monogrammer;
    UIGraphicsImageRenderer *_imageRenderer;
    UIImage *_firstAvatar;
    UIImage *_secondAvatar;
    UIImage *_thirdAvatar;
    CAShapeLayer *_overlayLayer;
}

@property (retain, nonatomic) CNMonogrammer *monogrammer;
@property (retain, nonatomic) UIGraphicsImageRenderer *imageRenderer;
@property (retain, nonatomic) UIImage *firstAvatar;
@property (retain, nonatomic) UIImage *secondAvatar;
@property (retain, nonatomic) UIImage *thirdAvatar;
@property (retain, nonatomic) CAShapeLayer *overlayLayer;
@property (readonly) NSObject<OS_os_log> *log;
@property (retain, nonatomic) PHAssetCollection *sharedAlbumCollection;
@property (nonatomic, getter=isEnabled) _Bool enabled;

+ (id)sharedSerialQueue;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setImage:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)setSharedAlbumCollection:(id)arg1 forceLayoutSubscriberAvatars:(_Bool)arg2;
- (void)embedInView:(id)arg1;
- (struct CGSize)_sizeForNumberOfAvatars:(unsigned long long)arg1;
- (void)_updateSubscriberAvatars;
- (void)_updateSubscriberAvatarsWithAlbumCollection:(id)arg1;
- (void)_resetImages;
- (void)_resetViewContents;
- (void)_resetViewContentsIfNeededForAlbumCollection:(id)arg1;
- (void)_setContentsImage:(id)arg1 withShadowPath:(struct CGPath *)arg2 forAlbumCollection:(id)arg3;
- (void)_requestPersonPhoto:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)setPersonPhoto:(id)arg1 atIndex:(long long)arg2 albumCollection:(id)arg3;
- (void)_renderAvatarsForAlbumCollection:(id)arg1;
- (void)accessibilityInvertColorsStatusDidChange:(id)arg1;

@end
