/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <LoggingSupport/OSActivityStream.h>

@class NSMutableArray, NSObject, NSString, OSLogPersistence;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKLTailLog : OSActivityStream

{
    _Bool _stillReadingFromArchive;
    _Bool _continueToReturnResults;
    OSLogPersistence *_logPersistence;
    OSActivityStream *_activityStream;
    NSMutableArray *_results;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) OSLogPersistence *logPersistence;
@property (retain, nonatomic) OSActivityStream *activityStream;
@property (retain, nonatomic) NSMutableArray *results;
@property (nonatomic) _Bool stillReadingFromArchive;
@property (nonatomic) _Bool continueToReturnResults;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)stop;
- (void)start;
- (void)streamDidStop:(id)arg1;
- (_Bool)activityStream:(id)arg1 results:(id)arg2;
- (void)streamDidFail:(id)arg1 error:(id)arg2;
- (void)fetchFromStartDate:(id)arg1 toEndDate:(id)arg2;
- (void)persistenceDidFinishReadingForStartDate:(id)arg1 endDate:(id)arg2;
- (_Bool)persistence:(id)arg1 results:(id)arg2 error:(id)arg3;
- (void)startFromStartDate:(id)arg1;

@end
