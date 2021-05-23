/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface PGROISceneMatcher : NSObject

{
    NSMutableDictionary *_confidenceThresholdByWhitelistedSceneIdentifierByROILabel;
    NSMutableDictionary *_confidenceThresholdByBlacklistedSceneIdentifierByROILabel;
}

+ (id)confidenceThresholdBySceneIdentifierWithSceneNames:(id)arg1 blacklisted:(_Bool)arg2;
+ (id)blacklistedSceneNamesByROILabel;
+ (id)whitelistedSceneNamesByROILabel;
+ (id)sharedROISceneMatcher;
+ (id)beachSceneNames;
+ (id)mountainSceneNames;
+ (id)natureSceneNames;
+ (id)nonNatureSceneNames;
+ (id)waterSceneNames;
+ (id)nonWaterSceneNames;
+ (id)urbanSceneNames;

- (id)confidenceThresholdByWhitelistedSceneIdentifierForROILabel:(id)arg1;
- (id)confidenceThresholdByBlacklistedSceneIdentifierForROILabel:(id)arg1;

@end
