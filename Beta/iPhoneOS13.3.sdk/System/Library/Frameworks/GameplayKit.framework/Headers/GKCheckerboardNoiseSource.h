/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <GameplayKit/GKNoiseSource.h>

@interface GKCheckerboardNoiseSource : GKNoiseSource

{
    double _squareSize;
}

@property (nonatomic) double squareSize;

+ (id)checkerboardNoiseWithSquareSize:(double)arg1;

- (id)init;
- (id)initWithSquareSize:(double)arg1;
- (double)valueAt: /* Error: Ran out of types for this method. */;
- (id)cloneModule;

@end
