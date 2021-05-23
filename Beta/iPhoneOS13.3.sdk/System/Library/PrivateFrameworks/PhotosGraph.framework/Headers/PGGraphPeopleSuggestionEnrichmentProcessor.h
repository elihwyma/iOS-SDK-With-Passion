/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PGGraphPeopleSuggestionEnrichmentProcessor : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)backgroundJobName;
+ (double)backgroundJobTimeout;
+ (_Bool)supportsBackgroundJob;

- (void)enrichDataModelWithManager:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;

@end
