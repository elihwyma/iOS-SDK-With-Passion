/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADImageFillTechnique.h>

__attribute__((visibility("hidden")))
@interface OADTileTechnique : OADImageFillTechnique

{
    float mOffsetX;
    _Bool mIsOffsetXOverridden;
    float mOffsetY;
    _Bool mIsOffsetYOverridden;
    float mScaleX;
    _Bool mIsScaleXOverridden;
    float mScaleY;
    _Bool mIsScaleYOverridden;
    int mFlipMode;
    _Bool mIsFlipModeOverridden;
    int mAlignment;
    _Bool mIsAlignmentOverridden;
}

+ (id)defaultProperties;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)alignment;
- (void)setAlignment:(int)arg1;
- (id)initWithDefaults;
- (float)offsetX;
- (float)offsetY;
- (void)setOffsetX:(float)arg1;
- (void)setFlipMode:(int)arg1;
- (void)setOffsetY:(float)arg1;
- (void)setScaleX:(float)arg1;
- (void)setScaleY:(float)arg1;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (void)removeUnnecessaryOverrides;
- (_Bool)isFlipModeOverridden;
- (int)flipMode;
- (_Bool)isOffsetXOverridden;
- (_Bool)isOffsetYOverridden;
- (_Bool)isScaleXOverridden;
- (_Bool)isScaleYOverridden;
- (_Bool)isAlignmentOverridden;
- (float)scaleX;
- (float)scaleY;

@end
