/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <QuartzCore/CALayer.h>

@interface CKAsyncLayer : CALayer

{
    int _displaySentinel;
    _Bool _needsAsyncDisplayOnly;
}

@property unsigned long long displayMode;

+ (id)defaultValueForKey:(id)arg1;
+ (void)drawInContext:(struct CGContext *)arg1 parameters:(id)arg2;
+ (id)displayQueue;
+ (CDUnknownBlockType)asyncDisplayBlockWithBounds:(struct CGRect)arg1 contentsScale:(double)arg2 opaque:(_Bool)arg3 backgroundColor:(struct CGColor *)arg4 displaySentinel:(int *)arg5 expectedDisplaySentinelValue:(int)arg6 drawingDelegate:(id)arg7 drawParameters:(id)arg8;
+ (void)drawAsyncLayerInContext:(struct CGContext *)arg1 parameters:(id)arg2;

- (id)name;
- (void)setNeedsDisplay;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)display;
- (id)drawParameters;
- (id)willDisplayAsynchronouslyWithDrawParameters:(id)arg1;
- (void)didDisplayAsynchronously:(id)arg1 withDrawParameters:(id)arg2;
- (void)setNeedsAsyncDisplay;
- (void)cancelAsyncDisplay;

@end
