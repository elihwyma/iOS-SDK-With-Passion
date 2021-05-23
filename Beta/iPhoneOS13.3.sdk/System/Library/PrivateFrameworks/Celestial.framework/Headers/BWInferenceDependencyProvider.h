/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSMapTable, NSSet;

@interface BWInferenceDependencyProvider : NSObject

{
    NSMapTable *_dependenciesByInputVideoRequirements;
    NSMapTable *_dependenciesByOutputVideoRequirements;
    NSDictionary *_providedVideoRequirementsByAttachedMediaKey;
    NSSet *_consumedVideoAttachedMediaKeys;
}

@property (nonatomic, readonly) NSMapTable *dependenciesByInputVideoRequirements;
@property (nonatomic, readonly) NSMapTable *dependenciesByOutputVideoRequirements;
@property (retain, nonatomic) NSDictionary *providedVideoRequirementsByAttachedMediaKey;
@property (retain, nonatomic) NSSet *consumedVideoAttachedMediaKeys;
@property (copy, nonatomic, readonly) NSArray *allInputVideoDependencies;
@property (copy, nonatomic, readonly) NSArray *allOutputVideoDependencies;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)dependenciesForInputVideoRequirement:(id)arg1;
- (id)dependenciesForOutputVideoRequirement:(id)arg1;

@end
