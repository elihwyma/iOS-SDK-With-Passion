/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSArray;

@interface BWInferenceScalingRequirement : NSObject

{
    NSArray *_orderedVideoRequirements;
}

@property (nonatomic, readonly) NSArray *orderedVideoRequirements;

- (void)dealloc;
- (void)_appendIntermediateRequirementsToList:(id)arg1 forSatisfyingOutputRequirement:(id)arg2;
- (id)initWithInputVideoRequirement:(id)arg1 requestedOutputVideoRequirements:(id)arg2;

@end
