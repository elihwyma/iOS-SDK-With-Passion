/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@class SKUniform;

__attribute__((visibility("hidden")))
@interface SKUniformInfo : NSObject

{
    unsigned long long seed;
    unsigned long long textureTarget;
    SKUniform *uniform;
}

@property unsigned long long seed;
@property unsigned long long textureTarget;
@property (retain) SKUniform *uniform;

- (id)init;

@end
