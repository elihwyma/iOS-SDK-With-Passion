/*
 Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface AXElementGrouper : NSObject

{
    double _thresholdForDeterminingEqualSize;
    long long _heuristics;
}

@property (nonatomic) long long heuristics;
@property (nonatomic, readonly) unsigned long long minimumGroupSize;
@property (nonatomic, readonly) unsigned long long maximumGroupSize;
@property (nonatomic, readonly) unsigned long long preferredGroupSize;
@property (nonatomic, readonly) double thresholdForDeterminingEqualSize;
@property (nonatomic, readonly) NSArray *transformationPasses;

- (id)init;
- (id)_buildHierarchyForGroup:(id)arg1 indexOfKeyboard:(unsigned long long *)arg2;
- (id)_flattenHierarchyForGroup:(id)arg1 rootLevel:(_Bool)arg2;
- (id)_applyTransformationPassesToRootGroup:(id)arg1;
- (id)_groupRemovingImpossibleGroups:(id)arg1 isRootLevel:(_Bool)arg2;
- (id)_applyTransformationPass:(id)arg1 toGroup:(id)arg2;
- (id)_groupablesForItems:(id)arg1;
- (id)initWithHeuristics:(long long)arg1;
- (id)groupElementsInRootGroup:(id)arg1;
- (_Bool)_frame:(struct CGRect)arg1 isApproximatelySameSizeAsFrame:(struct CGRect)arg2;

@end
