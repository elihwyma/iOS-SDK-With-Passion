/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PGGraphPhotosHighlightEnrichmentProcessor : NSObject

{
    unsigned long long _highlightTailorOptions;
}

@property (nonatomic) unsigned long long highlightTailorOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)backgroundJobName;
+ (double)backgroundJobTimeout;
+ (_Bool)supportsBackgroundJob;

- (id)init;
- (id)initWithHighlightTailorOptions:(unsigned long long)arg1;
- (void)recordProcessingWasCancelledWithGraphHealthRecorder:(id)arg1;
- (void)recordCurrentProcessingDate:(id)arg1 lastProcessingDate:(id)arg2 graphHealthRecorder:(id)arg3;
- (void)enrichDataModelWithManager:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (void)_updateHighlightTitlesForKind:(unsigned short)arg1 highlightTailor:(id)arg2 graphUpdateInventory:(id)arg3 alreadyEnrichedHighlights:(id)arg4 progressBlock:(CDUnknownBlockType)arg5;
- (void)_logFirstTimeExperienceMetricsIfNeededWithManager:(id)arg1;

@end
