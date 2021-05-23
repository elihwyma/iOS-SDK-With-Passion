/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/MNTransitInstruction.h>

@class GEOComposedRouteStep, NSDictionary;

@interface MNTransitStepInstruction : MNTransitInstruction

{
    GEOComposedRouteStep *_step;
    struct NSDictionary *_overridenInstructionsMapping;
}

@property (nonatomic, readonly) GEOComposedRouteStep *step;
@property (nonatomic, readonly) NSDictionary *overridenInstructionsMapping;

+ (id)instructionForStep:(id)arg1 overrides:(struct NSDictionary *)arg2 context:(long long)arg3;
+ (id)instructionForStep:(id)arg1 context:(long long)arg2;

- (id)instructionSet;
- (id)initWithStep:(id)arg1 overrides:(struct NSDictionary *)arg2 context:(long long)arg3;

@end
