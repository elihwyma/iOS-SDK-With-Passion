/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADFill.h>

@class NSArray, OADRelativeRect, OADShade;

__attribute__((visibility("hidden")))
@interface OADGradientFill : OADFill

{
    NSArray *mStops;
    OADRelativeRect *mTileRect;
    int mFlipMode;
    _Bool mIsFlipModeOverridden;
    _Bool mRotateWithShape;
    _Bool mIsRotateWithShapeOverridden;
    OADShade *mShade;
}

+ (id)defaultProperties;
+ (id)stringForTileFlipMode:(int)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setParent:(id)arg1;
- (id)stops;
- (void)setStops:(id)arg1;
- (id)initWithDefaults;
- (id)shade;
- (void)setRotateWithShape:(_Bool)arg1;
- (void)setFlipMode:(int)arg1;
- (void)setTileRect:(id)arg1;
- (void)setShade:(id)arg1;
- (void)setStyleColor:(id)arg1;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (void)removeUnnecessaryOverrides;
- (_Bool)usesPlaceholderColor;
- (_Bool)areStopsOverridden;
- (_Bool)isTileRectOverridden;
- (_Bool)isFlipModeOverridden;
- (_Bool)isRotateWithShapeOverridden;
- (_Bool)isShadeOverridden;
- (id)tileRect;
- (int)flipMode;
- (_Bool)rotateWithShape;
- (void)sortStops;
- (id)firstStop;
- (id)lastStop;

@end
