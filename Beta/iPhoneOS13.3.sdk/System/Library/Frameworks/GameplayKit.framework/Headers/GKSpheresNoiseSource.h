/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <GameplayKit/GKNoiseSource.h>

@interface GKSpheresNoiseSource : GKNoiseSource

{
    double _frequency;
}

@property (nonatomic) double frequency;

+ (id)spheresNoiseWithFrequency:(double)arg1;

- (id)init;
- (id)initWithFrequency:(double)arg1;
- (double)valueAt: /* Error: Ran out of types for this method. */;
- (id)cloneModule;

@end
