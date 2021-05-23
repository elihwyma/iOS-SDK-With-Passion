/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDKnob.h>

@class TSUImage;

@interface TSDButtonKnob : TSDKnob

{
    TSUImage *mImage;
    _Bool mEnabled;
    _Bool mHighlighted;
}

@property (retain, nonatomic) TSUImage *image;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;

- (void)dealloc;
- (id)knobImage;
- (_Bool)isHitByUnscaledPoint:(struct CGPoint)arg1 andRep:(id)arg2 returningDistance:(double *)arg3;
- (id)initWithType:(int)arg1 position:(struct CGPoint)arg2 radius:(double)arg3 tag:(unsigned long long)arg4 onRep:(id)arg5;
- (id)initWithImage:(id)arg1 tag:(unsigned long long)arg2 onRep:(id)arg3;
- (void)p_updateLayerImage;

@end
