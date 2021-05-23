/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXCuratedLibraryProcessingProgressReport : NSObject

+ (id)colorForNotEnriched;
+ (id)colorForDefault;
+ (id)colorForPartial;
+ (id)colorForSceneComplete;
+ (id)colorForComplete;
+ (void)computeProgressWithResultBlock:(CDUnknownBlockType)arg1;
+ (void)computeBriefDescriptionWithResultBlock:(CDUnknownBlockType)arg1;
+ (void)computeFullDescriptionWithResultBlock:(CDUnknownBlockType)arg1;
+ (void)getLibraryProcessingProgressWithResult:(CDUnknownBlockType)arg1;
+ (void)getHighlightEnrichmentProgressWithResult:(CDUnknownBlockType)arg1;
+ (id)highlightEnrichmentProgressImageWithProgressReport:(CDStruct_e4f06a70)arg1;

@end
