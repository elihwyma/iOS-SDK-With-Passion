/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString, PLSQLiteConnection, PLStorageOperator, PLTimer;

@interface PLSubmissions : NSObject

{
    _Bool _eplEnabled;
    _Bool _enableRestartAtEPL;
    PLStorageOperator *_storageOperator;
    PLSQLiteConnection *_connection;
    PLTimer *_watchdog;
    NSString *_request;
    NSString *_response;
    NSString *_filterQuery;
    NSString *_onDemandTasking;
    NSNumber *_capValue;
    NSArray *_submitReasonMessage;
}

@property (retain) PLSQLiteConnection *connection;
@property (retain) PLTimer *watchdog;
@property (retain) NSString *request;
@property (retain) NSString *response;
@property (retain) NSString *filterQuery;
@property (retain) NSString *onDemandTasking;
@property (retain) NSNumber *capValue;
@property _Bool enableRestartAtEPL;
@property (retain) NSArray *submitReasonMessage;
@property (weak) PLStorageOperator *storageOperator;
@property _Bool eplEnabled;

+ (id)sharedInstance;
+ (void)generateSubmissionTag;
+ (_Bool)flushMicrostackshots;
+ (id)getLogFilesFromInterval:(id)arg1 withLogType:(id)arg2 withStartTime:(id)arg3 withEndTime:(id)arg4;
+ (id)createAttachmentTarballWithTag:(id)arg1 withTag:(id)arg2 withSrcDir:(id)arg3 withDstDir:(id)arg4 withFileList:(id)arg5 withStartDate:(id)arg6 withEndDate:(id)arg7;
+ (void)logArchiveInfoForSubmissionWithArchiveEntry:(id)arg1 withSQLConnection:(id)arg2;
+ (id)getDateMarkerFromDate:(id)arg1;
+ (id)getDateMarkerWithStartDate:(id)arg1 withEndDate:(id)arg2;
+ (void)decorateFileAtPath:(id)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3;
+ (id)updateSubmissionTagWithConnection:(id)arg1 withReason:(id)arg2;
+ (id)getLogFilesFromPowerlog:(id)arg1 withLogType:(id)arg2 withStartDate:(id)arg3 withEndDate:(id)arg4;
+ (id)getArchiveUUID:(id)arg1;
+ (_Bool)createTagFile:(id)arg1 withTag:(id)arg2 withFileList:(id)arg3 withStartDate:(id)arg4 withEndDate:(id)arg5;
+ (_Bool)iCloudUploadEnabled;
+ (_Bool)updateSubmittedArchiveInfo:(id)arg1;
+ (id)getArchiveInfoEntry:(id)arg1;
+ (id)getArchiveDuration:(id)arg1;
+ (_Bool)archiveValidToSubmit:(id)arg1;
+ (void)decorateArchiveFileAtPath:(id)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3 withArchiveDate:(id)arg4;
+ (id)getTagFromPowerlog:(id)arg1;

- (id)init;
- (id)workQueue;
- (void)startWatchdog;
- (_Bool)isTaskFullEPLMode;
- (void)restartAtEPLEnable;
- (void)generateInternalOTASubmission;
- (void)generateTaskedOTASubmission;
- (void)generateSubmissionWithPayload:(id)arg1;
- (void)taskingModeSafeguard;
- (void)taskingModeSetup;
- (void)stopWatchdog;
- (void)registerEPLNotification;
- (void)filterDatabaseAtPath:(id)arg1 withMaxOutputFileSize:(long long)arg2 removingTables:(id)arg3 hashingTableKeys:(id)arg4 usingTrimmingQueries:(id)arg5 withSubmitReason:(id)arg6;
- (id)getSubmissionFileName:(id)arg1 withSubmissionType:(id)arg2 withID:(id)arg3 withExtension:(id)arg4;
- (void)submitMicrostackshots:(id)arg1 withTag:(id)arg2 withFiles:(id)arg3 withStartDate:(id)arg4 withEndDate:(id)arg5 withSubmitReason:(int)arg6;
- (void)submitSignpost:(id)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3 withSubmitReason:(int)arg4;
- (void)copyLogForUpload:(id)arg1 withTag:(id)arg2 withCreateDirectory:(_Bool)arg3 withDummyContent:(_Bool)arg4 withCompress:(_Bool)arg5;
- (void)submitLogsForArchive:(id)arg1 withSubmitReason:(int)arg2;
- (id)trimmingQueryForIndex:(int)arg1;
- (_Bool)submitFile:(id)arg1;
- (void)logTaskingStatus:(int)arg1 withAction:(int)arg2 withTables:(id)arg3;
- (void)clearOnDemandTaskingDefaults;
- (void)clearRemoteTaskingDefaults;
- (void)clearTaskingConfigDefaults;
- (void)disableHangtracer;
- (int)checkTaskingCompletionStatus;
- (void)logTaskingStatus:(int)arg1 withAction:(int)arg2;
- (void)filterAndSubmitAtStartDate:(id)arg1 withEndDate:(id)arg2 withSubmitArchive:(_Bool)arg3;
- (_Bool)taskingRequested;
- (void)taskingCleanup;
- (_Bool)shouldSelfTaskToday;
- (_Bool)shouldTaskToday;
- (_Bool)taskConfigured;
- (_Bool)runFilterQuery;
- (void)trimAndSubmitCurrentLog:(id)arg1 withEndDate:(id)arg2 atPath:(id)arg3 withSubmitReason:(int)arg4;
- (void)logTaskingTablesTurnedOn:(id)arg1;
- (void)enableHangtracer;

@end
