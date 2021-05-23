/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADFill.h>

@class OADBlipRef, OADImageFillTechnique, OADRelativeRect;

__attribute__((visibility("hidden")))
@interface OADImageFill : OADFill

{
    OADBlipRef *mBlipRef;
    _Bool mIsBlipRefOverridden;
    OADRelativeRect *mSourceRect;
    int mDpi;
    _Bool mIsDpiOverridden;
    _Bool mRotateWithShape;
    _Bool mIsRotateWithShapeOverridden;
    OADImageFillTechnique *mTechnique;
}

+ (id)defaultProperties;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setParent:(id)arg1;
- (id)color;
- (id)sourceRect;
- (void)setSourceRect:(id)arg1;
- (id)initWithDefaults;
- (void)setTechnique:(id)arg1;
- (id)technique;
- (_Bool)isBlipRefOverridden;
- (id)blipRef;
- (_Bool)isSourceRectOverridden;
- (void)setRotateWithShape:(_Bool)arg1;
- (void)setBlipRef:(id)arg1;
- (void)setStyleColor:(id)arg1;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (void)removeUnnecessaryOverrides;
- (_Bool)isRotateWithShapeOverridden;
- (_Bool)rotateWithShape;
- (void)setDpi:(int)arg1;
- (_Bool)isDpiOverridden;
- (_Bool)isTechniqueOverridden;
- (int)dpi;

@end
