/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString, TSUColor;

@interface TSWPDropCapBackgroundAdornment : NSObject

{
    TSUColor *_color;
    struct CGRect _bounds;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isBackground;

- (void)dealloc;
- (id)initWithColor:(id)arg1 bounds:(struct CGRect)arg2;
- (void)drawAdornmentForFragment:(const struct TSWPLineFragment *)arg1 inContext:(struct CGContext *)arg2 withFlags:(unsigned int)arg3 state:(const struct TSWPDrawingState *)arg4 bounds:(struct CGRect)arg5;

@end
