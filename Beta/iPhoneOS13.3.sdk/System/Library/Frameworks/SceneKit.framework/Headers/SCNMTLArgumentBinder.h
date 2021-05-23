/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCNMTLArgumentBinder : NSObject

{
    CDUnknownBlockType _block;
    int _frequency;
    _Bool _needsRenderResource;
}

- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1 frequency:(int)arg2 needsRenderResource:(_Bool)arg3;

@end
