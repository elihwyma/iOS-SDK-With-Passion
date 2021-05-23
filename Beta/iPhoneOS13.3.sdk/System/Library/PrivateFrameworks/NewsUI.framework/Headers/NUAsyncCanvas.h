/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NUCanvas;

@protocol OS_dispatch_queue;

@interface NUAsyncCanvas : NSObject

{
    NUCanvas *_canvas;
    NSObject<OS_dispatch_queue> *_layoutQueue;
}

@property (nonatomic, readonly) NUCanvas *canvas;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *layoutQueue;

- (id)initWithCanvas:(id)arg1;
- (id)initWithCanvas:(id)arg1 layoutQueue:(id)arg2;
- (void)layoutInBounds:(struct CGRect)arg1 traitCollection:(id)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)layoutInBounds:(struct CGRect)arg1 traitCollection:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
