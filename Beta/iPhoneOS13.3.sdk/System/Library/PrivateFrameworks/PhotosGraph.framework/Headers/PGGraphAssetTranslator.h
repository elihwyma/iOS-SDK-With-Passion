/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphEntityTranslator.h>

@interface PGGraphAssetTranslator : PGGraphEntityTranslator

+ (id)entityClassName;

- (id)graphChangesForChangedPropertyNamesByLocalIdentifier:(id)arg1 change:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)momentUpdateTypeByAssetProperty;
- (id)highlightUpdateTypeByAssetProperty;

@end
