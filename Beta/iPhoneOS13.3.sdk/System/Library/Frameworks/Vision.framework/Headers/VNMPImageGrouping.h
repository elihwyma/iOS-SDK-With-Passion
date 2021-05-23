/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNMPImageGrouping : NSObject

+ (long long)computeHierarchicalClusteringOfImageDescriptors:(id)arg1 results:(struct MPClusteringTreeNode **)arg2 context:(id)arg3;
+ (float)getDistanceForClusterNode:(struct MPClusteringTreeNode *)arg1 splitDistanceType:(int)arg2;
+ (vector_e14a6833)computeClusteringIntoKGroups:(int)arg1 orUsingDistanceThreshold:(float)arg2 forHierarchicalTree:(struct MPClusteringTreeNode *)arg3 context:(id)arg4;
+ (vector_e14a6833)computeClusteringIntoKGroups:(int)arg1 forHierarchicalTree:(struct MPClusteringTreeNode *)arg2 context:(id)arg3;
+ (vector_e14a6833)computeClusteringUsingDistanceThreshold:(float)arg1 forHierarchicalTree:(struct MPClusteringTreeNode *)arg2 context:(id)arg3;
+ (vector_e14a6833)computeNaturalClusteringForHierarchicalTree:(struct MPClusteringTreeNode *)arg1 context:(id)arg2;
+ (float)computeTimestampAdjustedDistanceForBaseDistance:(float)arg1 andTimestampDiff:(long long)arg2;
+ (float)computeTotalDistanceForDescriptorDistance:(float)arg1 timestampDiff:(long long)arg2 useTimestampAdjustment:(_Bool)arg3;

@end
