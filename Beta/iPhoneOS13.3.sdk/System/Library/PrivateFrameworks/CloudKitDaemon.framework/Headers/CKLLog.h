/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableArray, NSString, OSActivityStream, OSLogPersistence;

@interface CKLLog : NSObject

{
    _Bool _wantsSimulatorLogs;
    _Bool _colorOutput;
    double _startTimeOffset;
    NSDate *_absoluteStartDate;
    NSString *_processName;
    unsigned long long _source;
    OSLogPersistence *_archiveSource;
    OSActivityStream *_streamSource;
    NSMutableArray *_streamObservers;
    CDUnknownBlockType _completionHandler;
}

@property (nonatomic) unsigned long long source;
@property (retain, nonatomic) OSLogPersistence *archiveSource;
@property (retain, nonatomic) OSActivityStream *streamSource;
@property (retain, nonatomic) NSMutableArray *streamObservers;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic) _Bool wantsSimulatorLogs;
@property (nonatomic) double startTimeOffset;
@property (retain, nonatomic) NSDate *absoluteStartDate;
@property (retain, nonatomic) NSString *processName;
@property (nonatomic) _Bool colorOutput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_init;
- (void)streamDidStop:(id)arg1;
- (_Bool)activityStream:(id)arg1 results:(id)arg2;
- (void)streamDidFail:(id)arg1 error:(id)arg2;
- (void)persistenceDidFinishReadingForStartDate:(id)arg1 endDate:(id)arg2;
- (_Bool)persistence:(id)arg1 results:(id)arg2 error:(id)arg3;
- (void)_configureStreamSource:(id)arg1;
- (id)initForHostStream;
- (id)initWithRemoteDevice:(id)arg1;
- (id)initWithArchiveAtURL:(id)arg1;
- (void)addStreamObserver:(id)arg1;
- (void)streamLogsWithCompletion:(CDUnknownBlockType)arg1;

@end
