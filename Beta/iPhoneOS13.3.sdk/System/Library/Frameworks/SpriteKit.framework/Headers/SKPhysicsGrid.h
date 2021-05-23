/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@interface SKPhysicsGrid : NSObject

{
    float _width;
    float _height;
}

@property (nonatomic, readonly) float width;
@property (nonatomic, readonly) float height;

+ (id)vectorGridFromTexture:(id)arg1 accuracy:(float)arg2;
+ (id)gridFromTexture:(id)arg1 alphaThreshold:(float)arg2 accuracy:(float)arg3;
+ (id)gridFromOccupancyArray:(const char *)arg1 width:(int)arg2 height:(int)arg3;

- (void)spritesFromGrid:(id)arg1 gridSize:(struct CGSize)arg2 zPosition:(double)arg3 edgeColor:(id)arg4 interiorColor:(id)arg5 spriteSize:(struct CGSize)arg6 physicsBody:(id)arg7;
- (void)spritesFromGrid:(id)arg1 xDivisions:(int)arg2 zPosition:(double)arg3 spriteSize:(struct CGSize)arg4 texture:(id)arg5 physicsBody:(id)arg6;

@end
