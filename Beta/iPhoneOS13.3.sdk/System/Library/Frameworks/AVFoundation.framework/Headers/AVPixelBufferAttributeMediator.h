/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVPixelBufferAttributeMediator : NSObject

{
    struct OpaqueVTPixelBufferAttributesMediator *_mediator;
}

- (id)init;
- (void)dealloc;
- (void)removeRequestedPixelBufferAttributesAttributesForKey:(id)arg1;
- (void)setRequestedPixelBufferAttributes:(id)arg1 forKey:(id)arg2;
- (void)setLayersAreSuppressed:(_Bool)arg1;
- (id)mediatedPixelBufferAttributes;

@end
