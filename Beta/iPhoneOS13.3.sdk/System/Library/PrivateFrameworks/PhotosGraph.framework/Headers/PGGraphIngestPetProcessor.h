/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PGGraphIngestPetProcessor : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)shouldRunWithGraphUpdate:(id)arg1;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)_petSceneNodesForGraph:(id)arg1;
- (void)_removeAllPetNodesForGraph:(id)arg1;
- (id)_petsForSceneNode:(id)arg1 inGraph:(id)arg2;

@end
