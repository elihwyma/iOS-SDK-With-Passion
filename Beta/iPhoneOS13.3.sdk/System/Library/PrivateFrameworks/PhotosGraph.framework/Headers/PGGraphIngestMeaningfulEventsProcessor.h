/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PGGraphIngestMeaningfulEventsProcessor : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)shouldRunWithGraphUpdate:(id)arg1;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)processMeaningfulEventsWithMomentNodes:(id)arg1 graph:(id)arg2 requiredMeaningfulEventCriteriaByIdentifier:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (void)updateMeaningsOfMomentNode:(id)arg1 graph:(id)arg2 affectedMeaningLabels:(id)arg3 withMatchedResults:(id)arg4;

@end
