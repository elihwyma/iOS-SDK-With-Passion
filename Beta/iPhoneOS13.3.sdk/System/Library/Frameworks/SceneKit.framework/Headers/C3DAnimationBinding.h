/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface C3DAnimationBinding : NSObject

{
    void *_owner;
    struct __C3DModelTarget *_source;
    struct __C3DModelTarget *_destination;
    CDUnknownBlockType _valueTransformer;
}

- (void)dealloc;

@end
