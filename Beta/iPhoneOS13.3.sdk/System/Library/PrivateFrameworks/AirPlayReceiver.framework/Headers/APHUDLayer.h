/*
 Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface APHUDLayer : CALayer

{
    struct __CTFont *_Font;
    struct __CFDictionary *_TextAttributes;
    struct __CFArray *_Labels;
    struct __CFArray *_Values;
    struct __CFArray *_Colors;
}

- (id)init;
- (void)dealloc;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)setValue:(struct __CFString *)arg1 atIndex:(int)arg2;
- (void)addLine:(struct __CFString *)arg1 withColorIndex:(int)arg2;
- (void)setValueAtIndex:(int)arg1 format:(id)arg2;

@end
