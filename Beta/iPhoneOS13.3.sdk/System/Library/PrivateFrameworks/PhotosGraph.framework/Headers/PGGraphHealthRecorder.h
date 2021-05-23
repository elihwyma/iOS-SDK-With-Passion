/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PGGraphHealthRecorder : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)recordNumberOfGraphRebuildsCancelled:(unsigned long long)arg1;
- (void)recordNumberOfGraphRebuildTimeouts:(unsigned long long)arg1;
- (void)recordNumberOfGraphRebuildFailures:(unsigned long long)arg1;
- (void)recordTimeBetweenGraphRebuildsWithLastRebuildDate:(id)arg1 currentRebuildDate:(id)arg2;
- (void)recordNumberOfUnscheduledRebuilds:(unsigned long long)arg1;
- (void)recordTimeBetweenHighlightEnrichmentsWithLastEnrichmentDate:(id)arg1 currentEnrichmentDate:(id)arg2;
- (void)recordNumberOfHighlightEnrichmentsCancelled:(unsigned long long)arg1;
- (void)recordNumberOfHighlightEnrichmentTimeouts:(unsigned long long)arg1;

@end
