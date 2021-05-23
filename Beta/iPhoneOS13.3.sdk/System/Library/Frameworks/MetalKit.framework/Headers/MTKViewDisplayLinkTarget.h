/*
 Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

#import <Foundation/NSObject.h>

@class MTKView;

__attribute__((visibility("hidden")))
@interface MTKViewDisplayLinkTarget : NSObject

{
    MTKView *_target;
}

@property (weak, nonatomic) MTKView *target;

- (id)initWithTarget:(id)arg1;
- (void)draw;

@end
