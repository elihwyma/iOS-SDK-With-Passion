/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString, REFeatureMap;

@interface _REFeatureMapWrapper : NSObject

{
    REFeatureMap *_featureMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSSet *allFeatures;

- (id)valueForFeature:(id)arg1;
- (id)initWithFeatureMap:(id)arg1;

@end
