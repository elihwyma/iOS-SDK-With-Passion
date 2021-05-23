/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <GameplayKit/GKNoiseSource.h>

@interface GKConstantNoiseSource : GKNoiseSource

{
    double _value;
}

@property (nonatomic) double value;

+ (id)constantNoiseWithValue:(double)arg1;

- (id)init;
- (id)initWithValue:(double)arg1;
- (double)valueAt: /* Error: Ran out of types for this method. */;
- (id)cloneModule;

@end
