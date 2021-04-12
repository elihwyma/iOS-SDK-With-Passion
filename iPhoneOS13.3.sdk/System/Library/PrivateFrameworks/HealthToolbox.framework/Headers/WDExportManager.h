//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDateFormatter, NSDictionary, NSMutableArray, NSString, WDProfile;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface WDExportManager : NSObject
{
    WDProfile *_profile;
    NSObject<OS_dispatch_queue> *_outputSerialQueue;
    struct _xmlTextWriter _writer;
    struct _xmlTextWriter _writerCDA;
    NSObject<OS_dispatch_semaphore> *_sem;
    NSMutableArray *_resultsTypes;
    NSMutableArray *_vitalsTypes;
    NSArray *_completedRecords;
    NSString *_documentsPath;
    NSString *_exportPath;
    NSString *_filePath;
    NSString *_CDAFilePath;
    NSString *_archivePath;
    NSDateFormatter *_xmlDateFormatter;
    NSDateFormatter *_cdaDateFormatter;
    NSDictionary *_timePeriodsBySampleType;
    BOOL _exportInProgress;
    BOOL _exportFailed;
}

+ (id)allSupportedMedicalTypes;
@property BOOL exportFailed; // @synthesize exportFailed=_exportFailed;
@property BOOL exportInProgress; // @synthesize exportInProgress=_exportInProgress;
// - (void).cxx_destruct;
- (id)_formatTimeForBeatToBeatReading:(id)arg1;
- (id)_formatBPMForBeatToBeatReading:(id)arg1;
- (id)_preferredUnitForObjectType:(id)arg1;
- (void)_getAllOrdinaryDataTypesOfCategory:(long long)arg1 withArray:(id)arg2;
- (void)_getAllOrdinaryDataTypesOfClass:(Class)arg1 withArray:(id)arg2;
- (void)_completeAndCloseStreamingXML;
- (void)_archiveExportDirectory:(id)arg1 toFile:(id)arg2;
- (BOOL)_addSourceDirectory:(id)arg1 asPath:(id)arg2 archive:(id)arg3 fileManager:(id)arg4;
- (void)_exportElectrocardiogramsWithName:(id)arg1 dateOfBirth:(id)arg2;
- (BOOL)_writeElectrocardiogramsToDisk:(id)arg1 header:(id)arg2;
- (id)_electrocardiogramHeaderWithName:(id)arg1 dateOfBirth:(id)arg2;
- (void)_exportHealthRecords;
- (void)_writeHealthRecord:(id)arg1 documentDirectory:(id)arg2 fileNamesInUse:(id)arg3;
- (void)_writeCDASectionFooter;
- (void)_writeCDAResultsHeader;
- (void)_writeCDAVitalHeader;
- (void)_writeCDAHeaderWithName:(id)arg1 birthData:(id)arg2 biologicalSex:(long long)arg3;
- (void)_writeXMLPersonWithDateOfBirth:(id)arg1 biologicalSex:(long long)arg2 bloodType:(long long)arg3 skinType:(long long)arg4;
- (void)_writeXMLMedicalRecordWithType:(id)arg1 identifier:(id)arg2 sourceName:(id)arg3 sourceURL:(id)arg4 fhirVersion:(id)arg5 receivedDate:(id)arg6 jsonFilePath:(id)arg7;
- (void)_writeCDAEntryWithValue:(id)arg1 type:(id)arg2 sourceName:(id)arg3 sourceVersion:(id)arg4 device:(id)arg5 unit:(id)arg6 metadata:(id)arg7 startDate:(id)arg8 endDate:(id)arg9;
- (void)_writeCDAOrganizerEnd;
- (void)_writeCDAResultsOrganizerStart;
- (void)_writeCDAVitalsOrganizerStartWithStartDate:(id)arg1 endDate:(id)arg2;
- (void)_writeXMLActivitySummary:(id)arg1 activeEnergyBurnedUnit:(id)arg2;
- (void)_writeXMLWorkoutRouteEnd;
- (void)_writeXMLWorkoutRouteFileReference:(id)arg1;
- (void)_writeXMLWorkoutRouteStart:(id)arg1;
- (void)_writeXMLMetadataEntries:(id)arg1;
- (void)_writeXMLSampleAttributes:(id)arg1;
- (void)_writeXMLObjectAttributes:(id)arg1;
- (void)_writeXMLWorkoutEnd;
- (void)_writeXMLWorkoutEventWithEventType:(id)arg1 date:(id)arg2 duration:(double)arg3 durationUnit:(id)arg4;
- (void)_writeXMLWorkoutStartWithActivityType:(id)arg1 duration:(id)arg2 durationUnit:(id)arg3 totalDistance:(id)arg4 totalDistanceUnit:(id)arg5 totalEnergyBurned:(id)arg6 totalEnergyBurnedUnit:(id)arg7 sourceName:(id)arg8 sourceVersion:(id)arg9 device:(id)arg10 metadata:(id)arg11 creationDate:(id)arg12 startDate:(id)arg13 endDate:(id)arg14;
- (void)_writeXMLAudiogramEnd;
- (void)_writeXMLAudiogramSensitivityPoint:(id)arg1;
- (void)_writeXMLAudiogramStartWithAudiogram:(id)arg1;
- (void)_writeXMLCorrelationEnd;
- (void)_writeXMLCorrelationStartWithType:(id)arg1 sourceName:(id)arg2 sourceVersion:(id)arg3 device:(id)arg4 metadata:(id)arg5 creationDate:(id)arg6 startDate:(id)arg7 endDate:(id)arg8;
- (void)_writeXMLRecordWithType:(id)arg1 sourceName:(id)arg2 sourceVersion:(id)arg3 device:(id)arg4 unit:(id)arg5 metadata:(id)arg6 hrvMetadataList:(id)arg7 creationDate:(id)arg8 startDate:(id)arg9 endDate:(id)arg10 value:(id)arg11;
- (void)_writeDataForMedicalRecords:(id)arg1;
- (void)_writeDataForHRVAndTachograms;
- (void)_writeDataForActivitySummaries;
- (void)_writeDataForWorkoutRoutes:(id)arg1 semaphore:(id)arg2;
- (void)_writeDataForWorkoutType;
- (void)_writeDataForAudiogramType;
- (void)_writeDataForCorrelationType:(id)arg1;
- (void)_writeDataForCategoryType:(id)arg1;
- (void)_outputSerialQueue_finishWritingQuantityType:(id)arg1 count:(NSUInteger)arg2;
- (void)_outputSerialQueue_writeSamples:(id)arg1 forQuantityType:(id)arg2;
- (void)_outputSerialQueue_beginWritingQuantityType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (void)_writeMedicalRecords;
- (void)_writeHRVAndTachograms;
- (void)_writeActivitySummaries;
- (void)_writeWorkoutRouteForWorkout:(id)arg1 semaphore:(id)arg2;
- (void)_writeWorkoutType;
- (void)_writeAudiogramType;
- (void)_writeCorrelationType:(id)arg1;
- (void)_writeCategoryType:(id)arg1;
- (void)_writeQuantityType:(id)arg1;
- (void)_queryForSamplesOfType:(id)arg1 batchHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_queryForDateRanges;
- (void)createExportFileWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)cleanupExportFilesWithError:(id)arg1;
- (void)cancelCurrentExport;
- (id)initWithProfile:(id)arg1;

@end

