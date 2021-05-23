/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLAggdLogging : NSObject

+ (void)performMomentsStatisticsLogging:(id)arg1;
+ (void)performCollectionsStaticsLogging:(id)arg1;
+ (void)performYearsStaticsLogging:(id)arg1;
+ (void)performAnalysisStateLogging:(id)arg1 library:(id)arg2;
+ (void)performHyperionLocalResourcesLoggingForLibrary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)performHyperionLocalResourcesLogging:(CDUnknownBlockType)arg1 inManagedObjectContext:(id)arg2 cloudPhotoLibraryEnabled:(_Bool)arg3;
+ (id)_addPrefix:(id)arg1 toKeysInDictionary:(id)arg2;
+ (double)_getDateMedian:(id)arg1 fromStartDate:(id)arg2 forCameraCapture:(_Bool)arg3;
+ (id)_performMedianCalculation:(id)arg1;
+ (void)performLibrarySummaryLogging:(id)arg1 cloudPhotoLibraryEnabled:(_Bool)arg2;
+ (void)performCTMLibrarySummaryLogging:(id)arg1;
+ (void)performPersistentHistorySummaryLogging:(id)arg1;
+ (void)performCMMSummaryLogging:(id)arg1 cloudPhotoLibraryEnabled:(_Bool)arg2;
+ (void)performLibraryStatisticsLoggingForLibrary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
