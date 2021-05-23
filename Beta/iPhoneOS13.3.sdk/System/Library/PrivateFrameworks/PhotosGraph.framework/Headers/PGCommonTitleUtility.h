/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@interface PGCommonTitleUtility : NSObject

+ (id)addressNodesFromMomentNodes:(id)arg1;
+ (_Bool)isLargeCountryForAddressNode:(id)arg1;
+ (_Bool)locationIsInSupersetCategoryForAddressNode:(id)arg1 dimension:(unsigned long long)arg2;
+ (_Bool)locationIsInSupersetCategoryForLocationNode:(id)arg1;
+ (id)closestLocationNodeFromNode:(id)arg1 withDimension:(unsigned long long)arg2 remapMatchingDimensionBlock:(CDUnknownBlockType)arg3;
+ (id)closestLocationNodeFromNode:(id)arg1 withDimension:(unsigned long long)arg2 reverse:(_Bool)arg3;
+ (id)locationNodeWithDimension:(unsigned long long)arg1 rootNode:(id)arg2;
+ (_Bool)containsCelebrationForDateNodes:(id)arg1 holidayName:(id *)arg2;
+ (id)holidayNameForDateNodes:(id)arg1;
+ (id)dateNodesFromMomentNodes:(id)arg1;
+ (id)bestAddressNodeForMomentNodes:(id)arg1;
+ (void)startAndEndDateNodeFromDateNodes:(id)arg1 startDateNode:(id *)arg2 endDateNode:(id *)arg3;
+ (struct _NSRange)_closestSpaceMatchFromMatches:(id)arg1 withUsedNameRange:(struct _NSRange)arg2 searchForward:(_Bool)arg3;
+ (id)titleWithNoLineBreakSpaceForTitle:(id)arg1 andUsedNames:(id)arg2;
+ (id)titleWithLineBreakForTitle:(id)arg1 andUsedNames:(id)arg2;
+ (id)titleWithLineBreakForTitle:(id)arg1;
+ (id)_closestLocationNodeFromNode:(id)arg1 withDimension:(unsigned long long)arg2 remapMatchingDimensionBlock:(CDUnknownBlockType)arg3 reverse:(_Bool)arg4;
+ (id)_locationLabelForDimension:(unsigned long long)arg1;
+ (unsigned long long)dimensionForLabel:(id)arg1;

@end
