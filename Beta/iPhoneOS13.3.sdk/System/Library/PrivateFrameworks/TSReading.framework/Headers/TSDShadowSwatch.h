/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString, TSDShadow;

@interface TSDShadowSwatch : NSObject

{
    TSDShadow *mShadow;
}

@property (nonatomic, readonly) TSDShadow *shadow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)initWithShadow:(id)arg1;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 forImage:(struct CGImage *)arg3 swatchRect:(struct CGRect)arg4 wantsStroke:(_Bool)arg5;
- (void)p_drawContactShadowInContext:(struct CGContext *)arg1 inRect:(struct CGRect)arg2 forShadow:(id)arg3 forImage:(struct CGImage *)arg4 forSwatchRect:(struct CGRect)arg5;
- (void)p_drawCurvedShadowInContext:(struct CGContext *)arg1 inRect:(struct CGRect)arg2 forShadow:(id)arg3 forImage:(struct CGImage *)arg4 forSwatchRect:(struct CGRect)arg5;

@end
