/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@class NSString;

@interface TSDFill : NSObject <Swift>

{
    int mInterest;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isOpaque;
- (id)referenceColor;
- (_Bool)isThemeEquivalent:(id)arg1;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (int)fillType;
- (void)paintPath:(struct CGPath *)arg1 naturalBounds:(struct CGRect)arg2 inContext:(struct CGContext *)arg3 isPDF:(_Bool)arg4;
- (_Bool)isNearlyWhite;
- (_Bool)canApplyToCAShapeLayer;
- (void)applyToCAShapeLayer:(id)arg1 withScale:(double)arg2;
- (_Bool)drawsInOneStep;
- (void)addInterest;
- (void)removeInterest;
- (_Bool)isClear;
- (void)applyToCALayer:(id)arg1 withScale:(double)arg2;
- (_Bool)canApplyToCALayer;
- (_Bool)canApplyToCALayerByAddingSublayers;
- (_Bool)shouldBeReappliedToCALayer:(id)arg1;
- (void)i_flushCaches;

@end
