/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphEntityTranslator.h>

@interface PGGraphPersonTranslator : PGGraphEntityTranslator

+ (id)entityClassName;

- (id)graphChangesForDeletedIdentifiers:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)graphChangesForChangedPropertyNamesByLocalIdentifier:(id)arg1 change:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)stateUpdateProperties;
- (id)verifiedTypeProperties;

@end
