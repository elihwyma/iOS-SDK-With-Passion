/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface CLSSceneMatcher : NSObject

{
    NSMutableDictionary *_confidenceThresholdBySceneIdentifierBySceneLabel;
}

+ (id)confidenceThresholdTypeBySceneLabel;
+ (id)sceneNameBySceneLabel;
+ (id)sharedSceneMatcher;
+ (id)junkSceneNames;
+ (id)junkSceneNamesLegacy;
+ (id)babyChildTeenAdultAndPetSceneNames;
+ (id)babyAndPetSceneNames;
+ (id)childTeenAndAdultSceneNames;
+ (id)interestingSceneNames;
+ (id)whiteboardSceneNames;

- (id)confidenceThresholdBySceneIdentifierForSceneLabel:(id)arg1;

@end
