/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class PVSceneTaxonomy;

@interface VCPSceneTaxonomy : NSObject

{
    PVSceneTaxonomy *_sceneTaxonomy;
}

+ (id)sharedTaxonomy;

- (id)init;
- (id)sceneNameFromSceneId:(unsigned int)arg1;
- (id)sceneIdFromSceneName:(id)arg1;

@end
