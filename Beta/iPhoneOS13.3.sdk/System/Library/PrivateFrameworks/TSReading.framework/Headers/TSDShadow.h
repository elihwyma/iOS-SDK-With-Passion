/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@class NSString, TSUColor;

@interface TSDShadow : NSObject <Swift>

{
    double mAngle;
    double mOffset;
    double mRadius;
    double mOpacity;
    struct CGColor *mColor;
    _Bool mEnabled;
}

@property (nonatomic, readonly) double angle;
@property (nonatomic, readonly) double offset;
@property (nonatomic, readonly) struct CGPoint offsetDelta;
@property (nonatomic, readonly) double radius;
@property (nonatomic, readonly) double opacity;
@property (nonatomic, readonly) struct CGColor *color;
@property (nonatomic, readonly, getter=isEnabled) _Bool enabled;
@property (nonatomic, readonly) TSUColor *TSUColor;
@property (nonatomic, readonly) NSString *presetKind;

+ (id)shadowWithAngle:(double)arg1 offset:(double)arg2 radius:(double)arg3 opacity:(double)arg4 color:(struct CGColor *)arg5 enabled:(_Bool)arg6;
+ (id)presetKinds;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (_Bool)canMixWithNilObjects;
+ (id)mixableObjectClasses;
+ (id)p_defaultShadowEnabled:(_Bool)arg1;
+ (id)defaultShadow;
+ (id)defaultDisabledShadow;
+ (id)contactShadowWithAngle:(double)arg1 offset:(double)arg2 radius:(double)arg3 height:(double)arg4 opacity:(double)arg5 color:(struct CGColor *)arg6 enabled:(_Bool)arg7;
+ (id)shadowWithNSShadow:(id)arg1;
+ (id)curvedShadowWithOffset:(double)arg1 angle:(double)arg2 radius:(double)arg3 curve:(double)arg4 opacity:(double)arg5 color:(struct CGColor *)arg6 enabled:(_Bool)arg7;
+ (id)keyPathsForValuesAffectingTSUColor;
+ (_Bool)automaticallyNotifiesObserversOfTSUColor;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopy;
- (id)typeDescription;
- (_Bool)isThemeEquivalent:(id)arg1;
- (SEL)mapThemeAssetSelector;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (id)mixedBaseObjectWithObject:(id)arg1;
- (id)shadowByTransformingByTransform:(struct CGAffineTransform)arg1;
- (unsigned long long)shadowType;
- (void)applyToContext:(struct CGContext *)arg1 viewScale:(double)arg2 flipped:(_Bool)arg3 extraOffset:(struct CGSize)arg4;
- (struct CGRect)shadowBoundsForRect:(struct CGRect)arg1 additionalTransform:(struct CGAffineTransform)arg2;
- (double)clampOffset:(double)arg1;
- (double)clampRadius:(double)arg1;
- (double)clampOpacity:(double)arg1;
- (id)newShadowClampedForSwatches;
- (_Bool)isContactShadow;
- (_Bool)isDropShadow;
- (_Bool)isCurvedShadow;
- (_Bool)showForEditingText;
- (void)applyToContext:(struct CGContext *)arg1 viewScale:(double)arg2;
- (void)applyToContext:(struct CGContext *)arg1 viewScale:(double)arg2 flipped:(_Bool)arg3;
- (struct CGRect)boundsInNaturalSpaceForRep:(id)arg1;
- (struct CGRect)boundsForRep:(id)arg1;
- (struct CGImage *)newShadowImageForRep:(id)arg1 withSize:(struct CGSize)arg2 drawSelector:(SEL)arg3 unflipped:(_Bool)arg4;
- (struct CGRect)shadowBoundsForRect:(struct CGRect)arg1;
- (struct CGRect)shadowBoundsForRect:(struct CGRect)arg1 additionalAngle:(double)arg2;
- (_Bool)differenceRequiresRebuilding:(id)arg1;
- (id)NSShadow;
- (id)i_initWithOpacity:(double)arg1 color:(struct CGColor *)arg2 enabled:(_Bool)arg3;
- (struct CGImage *)i_newEmptyImageWithSize:(struct CGSize)arg1;

@end
