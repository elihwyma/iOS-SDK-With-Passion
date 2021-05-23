/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphNode.h>

@class NSArray, NSString;

@interface PGGraphSeasonNode : PGGraphNode

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSArray *localizedSynonyms;

+ (id)_localizationKeyForSeasonNode:(id)arg1;

- (void)enumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;

@end
