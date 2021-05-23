/*
 Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

#import <UIKit/UIView.h>

@class BPSRemoteImageView, NSString, UIImageView;

@interface BPSWatchView : UIView

{
    _Bool _wantsLightenBlendedScreen;
    NSString *_screenImageSearchBundleIdentifier;
    NSString *_screenImageName;
    unsigned long long _style;
    unsigned long long _sizeOverride;
    BPSRemoteImageView *_watchImageView;
    NSString *_styleVersionSuffix;
    UIImageView *_watchScreenImageView;
}

@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long sizeOverride;
@property (retain, nonatomic) BPSRemoteImageView *watchImageView;
@property (copy, nonatomic) NSString *styleVersionSuffix;
@property (nonatomic, readonly) UIImageView *watchScreenImageView;
@property (nonatomic) _Bool wantsLightenBlendedScreen;
@property (retain, nonatomic) NSString *screenImageSearchBundleIdentifier;
@property (copy, nonatomic) NSString *screenImageName;

- (id)image;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(unsigned long long)arg1;
- (unsigned long long)deviceSize;
- (id)initWithStyle:(unsigned long long)arg1 versionModifier:(id)arg2 allowsMaterialFallback:(_Bool)arg3;
- (id)watchAssetBundle;
- (id)screenBackground:(struct CGSize)arg1;
- (void)applyScreenStyle;
- (struct CGSize)screenImageSize;
- (id)initWithStyle:(unsigned long long)arg1 andVersionModifier:(id)arg2;
- (id)initWithStyle:(unsigned long long)arg1 allowsMaterialFallback:(_Bool)arg2;
- (void)_cleanedImageName:(id *)arg1 withFallbackImage:(id *)arg2;
- (void)overrideMaterial:(unsigned long long)arg1 size:(unsigned long long)arg2;

@end
