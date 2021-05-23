/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphNode.h>

@class NSString;

@interface PGGraphHolidayNode : PGGraphNode

@property (nonatomic, readonly) unsigned long long category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *localizedName;

- (void)enumerateCelebratingMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateCelebratingHighlightNodesUsingBlock:(CDUnknownBlockType)arg1;

@end
