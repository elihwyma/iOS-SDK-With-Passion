/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PGGraphIngestAutoNamingProcessor : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)personNodesToNameInGraph:(id)arg1;
+ (id)_personNodesWithoutContactInGraph:(id)arg1;
+ (_Bool)hasMeNodeAndMeContactInGraph:(id)arg1;

- (_Bool)shouldRunWithGraphUpdate:(id)arg1;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;

@end
