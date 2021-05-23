/*
 Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface APGraphLayer : CALayer

{
    float **_Values;
    float *_Mins;
    float *_Maxes;
    int *_StartIndex;
    int *_NumValues;
    int _NumGraphs;
    struct CGPoint *_Lines;
    int _MaxLength;
    struct __CTFont *_Font;
    struct __CFDictionary *_TextAttributes;
}

+ (struct CGColor *)copyGraphColorWithIndex:(int)arg1;

- (id)init;
- (void)dealloc;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)setUpGraphs:(int)arg1;
- (void)setUpGraph:(int)arg1 min:(float)arg2 max:(float)arg3 numValues:(int)arg4;
- (void)updateValue:(int)arg1 value:(float)arg2;

@end
