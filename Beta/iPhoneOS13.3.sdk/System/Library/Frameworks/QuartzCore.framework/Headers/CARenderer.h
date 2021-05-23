/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class CAContext, CALayer;

@protocol CARendererDelegate;

@interface CARenderer : NSObject

{
    struct CARendererPriv *_priv;
}

@property (retain) CAContext *context;
@property (weak) id <CARendererDelegate> delegate;
@property (retain) CALayer *layer;
@property struct CGRect bounds;

+ (id)rendererWithMTLTexture:(id)arg1 options:(id)arg2;
+ (id)rendererWithEAGLContext:(id)arg1 options:(id)arg2;

- (void)dealloc;
- (void)setDestination:(id)arg1;
- (void)endFrame;
- (id)_initWithOptions:(id)arg1;
- (id)_initWithMTLTexture:(id)arg1 options:(id)arg2;
- (id)_initWithEAGLContext:(id)arg1 options:(id)arg2;
- (void)beginFrameAtTime:(double)arg1 timeStamp:(CDStruct_e50ab651 *)arg2;
- (struct CGRect)updateBounds;
- (void)addUpdateRect:(struct CGRect)arg1;
- (double)nextFrameTime;
- (_Bool)hasMissingContent;
- (void)render;

@end
