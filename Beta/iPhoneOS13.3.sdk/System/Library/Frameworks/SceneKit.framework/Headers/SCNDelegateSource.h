/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNImageSource.h>

__attribute__((visibility("hidden")))
@interface SCNDelegateSource : SCNImageSource

{
    id _delegate;
}

@property (retain, nonatomic) id delegate;

- (void)dealloc;
- (_Bool)isOpaque;
- (id)textureSource;

@end
