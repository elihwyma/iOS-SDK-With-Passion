/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIBarBackgroundLayout.h>

@class _UIBarBackgroundAppearanceData;

__attribute__((visibility("hidden")))
@interface _UIBarBackgroundLayoutModern : _UIBarBackgroundLayout

{
    _Bool _backgroundsAreSame;
    _UIBarBackgroundAppearanceData *_backgroundData1;
    _UIBarBackgroundAppearanceData *_backgroundData2;
}

@property (retain, nonatomic) _UIBarBackgroundAppearanceData *backgroundData1;
@property (retain, nonatomic) _UIBarBackgroundAppearanceData *backgroundData2;

- (void)describeInto:(id)arg1;
- (_Bool)shouldUseExplicitGeometry;
- (_Bool)bg2Enabled;
- (_Bool)bg1HasShadow;
- (id)bg1ShadowImage;
- (_Bool)bg2HasShadow;
- (id)bg2ShadowImage;
- (id)bg1Effects;
- (id)bg1Image;
- (id)bg1Color;
- (id)bg2Effects;
- (id)bg2Image;
- (id)bg2Color;
- (double)bg1Alpha;
- (long long)bg1ImageMode;
- (id)bg1ShadowEffect;
- (id)bg1ShadowColor;
- (id)bg1ShadowTint;
- (double)bg1ShadowAlpha;
- (double)bg2Alpha;
- (long long)bg2ImageMode;
- (id)bg2ShadowEffect;
- (id)bg2ShadowColor;
- (id)bg2ShadowTint;
- (double)bg2ShadowAlpha;
- (id)initWithLayout:(id)arg1;

@end
