/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <SymptomEvaluator/NetDiagnosticProbe.h>

@class NSMutableArray, NSObject, NSString;

@protocol CoreTelephonyDumpProbeDelegate, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CoreTelephonyDumpProbe : NetDiagnosticProbe

{
    _Bool _archiveDumpUponEnd;
    _Bool _deleteCTDumpFilesAfterArchive;
    _Bool _deleteArchiveAfterComplete;
    _Bool _coreDumpEnabled;
    _Bool _basebandTraceEnabled;
    _Bool _observingCoreTelephonyDumpBegin;
    _Bool _observingCoreTelephonyDumpEnd;
    _Bool _gotFilteredOut;
    double _startDumpTimeout;
    double _endDumpTimeout;
    id <CoreTelephonyDumpProbeDelegate> _delegate;
    double _previousDumpTimestamp;
    NSString *_previousDumpFolderPath;
    NSString *_previousDumpFolderPrefix;
    unsigned long long _maximumFileSizeToArchive;
    NSString *_dumpReason;
    NSObject<OS_dispatch_source> *_beginTimeoutTimer;
    NSObject<OS_dispatch_source> *_endTimeoutTimer;
    NSObject<OS_dispatch_source> *_archiveTimeoutTimer;
    NSMutableArray *_archivePaths;
    struct __CTServerConnection *_ctServerConnection;
}

@property (retain, nonatomic) NSObject<OS_dispatch_source> *beginTimeoutTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *endTimeoutTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *archiveTimeoutTimer;
@property (retain, nonatomic) NSMutableArray *archivePaths;
@property (nonatomic) _Bool observingCoreTelephonyDumpBegin;
@property (nonatomic) _Bool observingCoreTelephonyDumpEnd;
@property (nonatomic) _Bool coreDumpEnabled;
@property (nonatomic) _Bool basebandTraceEnabled;
@property (nonatomic) _Bool gotFilteredOut;
@property (nonatomic) struct __CTServerConnection *ctServerConnection;
@property (retain) id <CoreTelephonyDumpProbeDelegate> delegate;
@property (nonatomic) double previousDumpTimestamp;
@property (copy, nonatomic) NSString *previousDumpFolderPath;
@property (copy, nonatomic) NSString *previousDumpFolderPrefix;
@property (nonatomic) unsigned long long maximumFileSizeToArchive;
@property (nonatomic) _Bool archiveDumpUponEnd;
@property (nonatomic) _Bool deleteCTDumpFilesAfterArchive;
@property (nonatomic) _Bool deleteArchiveAfterComplete;
@property (nonatomic) double startDumpTimeout;
@property (nonatomic) double endDumpTimeout;
@property (copy, nonatomic) NSString *dumpReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)dateTimeStringFromCTDumpFolderPrefix:(id)arg1;

- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (_Bool)enableCoreTelephonyLoggingForCustomerSeed:(_Bool)arg1;
- (void)ctServerConnectionNotification:(struct __CFString *)arg1 notificationInfo:(struct __CFDictionary *)arg2;
- (id)probeOutputFilePaths;
- (void)netDiagnosticTaskStatusChangedFor:(id)arg1 toStatus:(int)arg2;
- (_Bool)getBasebandTraceEnabledState:(_Bool *)arg1 coreDumpEnabled:(_Bool *)arg2;
- (void)archiveDumpFolderWithDumpTimestamp:(double)arg1 folderPath:(id)arg2 folderPrefix:(id)arg3;
- (_Bool)startCoreTelephonyDumpArchive:(id)arg1;
- (void)stopCoreTelephonyDumpMonitoring;
- (void)startCoreTelephonyDump:(double)arg1;
- (void)waitForCoreTelephonyDumpEnd:(double)arg1;

@end
