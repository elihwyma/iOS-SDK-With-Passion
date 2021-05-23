/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface REFeatureMapGenerator : NSObject

{
    NSMutableDictionary *_featureIndexMap;
}

- (id)initWithFeatureList:(id)arg1;
- (id)createFeatureMap;

@end
