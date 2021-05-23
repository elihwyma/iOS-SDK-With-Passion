/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@interface AXMPhotoVisionSupport : NSObject

+ (void)_addNode:(id)arg1 toDescription:(id)arg2 atLevel:(long long)arg3;
+ (id)leafNodeLabels;
+ (id)nonLeafNodeLabels;
+ (id)_collectLabelsIncludingLeafNodes:(_Bool)arg1 nonLeafNodes:(_Bool)arg2;
+ (id)_blacklistedVoiceOverClassificationLabels;
+ (_Bool)_validatePhotoVisionSoftLinkSymbols;
+ (id)buildTaxonomyDescription;
+ (id)buildParentChainDescriptionForAllNodes;
+ (id)buildGraphStatisticsDescription;
+ (id)processSceneClassifications:(id)arg1 withOptions:(unsigned int)arg2;
+ (id)localizedLabelForClassificationObservation:(id)arg1;

@end
