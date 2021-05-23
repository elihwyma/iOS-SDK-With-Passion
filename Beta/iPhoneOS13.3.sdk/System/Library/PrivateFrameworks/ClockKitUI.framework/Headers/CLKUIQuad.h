/*
 Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

#import <Foundation/NSObject.h>

@class CLKUIQuadView;

@interface CLKUIQuad : NSObject

{
    _Bool _opaque;
    CLKUIQuadView *_quadView;
}

@property (nonatomic, getter=isOpaque) _Bool opaque;
@property (weak, nonatomic) CLKUIQuadView *quadView;

- (id)init;
- (void)purge;
- (void)setupForQuadView:(id)arg1;
- (_Bool)prepareForTime:(double)arg1;
- (void)unlinkQuadView;
- (void)encodeGLforSize:(struct CLKUIQuadSize)arg1;
- (void)performOffscreenPassesWithCommandBuffer:(id)arg1;
- (void)renderForDisplayWithEncoder:(id)arg1;

@end
