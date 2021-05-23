/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PGGraphSearchEnrichmentProcessor : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)backgroundJobName;
+ (double)backgroundJobTimeout;
+ (_Bool)supportsBackgroundJob;

- (void)enrichDataModelWithManager:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (_Bool)_shouldProcessGraphUpdate:(id)arg1;
- (void)_processGraphUpdateInventory:(id)arg1 manager:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;

@end
