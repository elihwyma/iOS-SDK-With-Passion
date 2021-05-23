/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/MNTransitInstruction.h>

@class GEOComposedWalkingRouteLeg;

@interface MNTransitWalkingLegInstruction : MNTransitInstruction

{
    GEOComposedWalkingRouteLeg *_walkingLeg;
}

@property (nonatomic, readonly) GEOComposedWalkingRouteLeg *walkingLeg;

+ (id)instructionForWalkingLeg:(id)arg1 context:(long long)arg2;

- (id)instructionSet;
- (struct NSDictionary *)overridenInstructionsMapping;
- (id)initWithWalkingLeg:(id)arg1 context:(long long)arg2;

@end
