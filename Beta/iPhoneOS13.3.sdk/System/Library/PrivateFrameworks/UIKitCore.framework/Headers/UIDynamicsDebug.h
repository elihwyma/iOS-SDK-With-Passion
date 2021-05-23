/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class EAGLContext, GLKBaseEffect, GLKView, MISSING_TYPE, NSString, UIDynamicAnimator;

__attribute__((visibility("hidden")))
@interface UIDynamicsDebug : NSObject

{
    unsigned int _vertexBuffer;
    struct {
        struct {
            float x;
            float y;
        } position;
        MISSING_TYPE *color;
    } _vertices[42000];
    GLKBaseEffect *_effect;
    EAGLContext *_ctx;
    _Bool _enabled;
    _Bool _showPhysics;
    _Bool _showOutlineInterior;
    _Bool _showFields;
    UIDynamicAnimator *_animator;
    GLKView *_debugView;
}

@property (weak, nonatomic) UIDynamicAnimator *animator;
@property (retain, nonatomic) GLKView *debugView;
@property (nonatomic) _Bool enabled;
@property (nonatomic) _Bool showPhysics;
@property (nonatomic) _Bool showOutlineInterior;
@property (nonatomic) _Bool showFields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setNeedsDisplay;
- (id)initWithAnimator:(id)arg1;
- (void)captureDebugInformation;
- (void)_teardownDebugView;
- (void)_setupDebugViewIfNeccessary;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;

@end
