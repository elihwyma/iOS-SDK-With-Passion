/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, NSURL, NSURLSession, NSURLSessionConfiguration, SUCoreEvent, SUCoreEventReporterDelegate;

@protocol OS_dispatch_queue;

@interface SUCoreEventReporter : NSObject

{
    _Bool _splunkAccessCreated;
    _Bool _dropEventsOnSendFailure;
    int _activeSendTaskCount;
    NSMutableArray *_awaitingRetry;
    NSURL *_splunkURL;
    NSObject<OS_dispatch_queue> *_splunkStateQueue;
    NSURLSessionConfiguration *_inProcessConfig;
    NSOperationQueue *_inProcessOperationQueue;
    NSURLSession *_inProcessSession;
    SUCoreEventReporterDelegate *_reporterDelegate;
    NSString *_storeToPath;
    SUCoreEvent *_lastErrorEvent;
    NSMutableDictionary *_eventExtensions;
    CDUnknownBlockType _onceIdleCompletion;
}

@property (retain, nonatomic) NSMutableArray *awaitingRetry;
@property (retain, nonatomic) NSURL *splunkURL;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *splunkStateQueue;
@property (retain, nonatomic) NSURLSessionConfiguration *inProcessConfig;
@property (retain, nonatomic) NSOperationQueue *inProcessOperationQueue;
@property (retain, nonatomic) NSURLSession *inProcessSession;
@property (retain, nonatomic) SUCoreEventReporterDelegate *reporterDelegate;
@property (retain, nonatomic) NSString *storeToPath;
@property (retain, nonatomic) SUCoreEvent *lastErrorEvent;
@property (nonatomic) _Bool splunkAccessCreated;
@property (retain, nonatomic) NSMutableDictionary *eventExtensions;
@property (nonatomic) int activeSendTaskCount;
@property (nonatomic) _Bool dropEventsOnSendFailure;
@property (copy, nonatomic) CDUnknownBlockType onceIdleCompletion;

+ (id)sharedReporter;
+ (id)_sharedReporter:(id)arg1;
+ (id)_errorDomainAbbreviation:(id)arg1;
+ (id)initSharedReporterStoringToPath:(id)arg1;
+ (void)augmentEvent:(id)arg1 withError:(id)arg2;
+ (id)buildSplunkServerURLFromBase:(id)arg1;

- (_Bool)sendEvent:(id)arg1;
- (void)handleSendFinishedInvalidFileUUID:(id)arg1 withError:(id)arg2;
- (void)handleSendFinishedWithFileUUID:(id)arg1 sendSucceeded:(_Bool)arg2 withStatusCode:(long long)arg3 withError:(id)arg4;
- (id)initStoringToPath:(id)arg1;
- (void)_buildEventExtensions;
- (_Bool)sendEvent:(id)arg1 toServerURL:(id)arg2;
- (void)_sendCoreEvent:(id)arg1;
- (void)_sendCoreEvents:(id)arg1 secondEvent:(id)arg2;
- (_Bool)_sendFirstAwaitingRetry;
- (void)_checkWhetherIdle:(id)arg1;
- (void)_sendInterruptedFromStorage;
- (id)_buildContextFromNVRAMBootArgs;
- (void)_splunkAccessSetup;
- (void)_adoptLastErrorEvent:(id)arg1;
- (id)_getSplunkServerURL:(id)arg1;
- (void)_sendSplunkEvents:(id)arg1 forEventUUID:(id)arg2 toServerURL:(id)arg3;
- (id)_newScrubbedEvents:(id)arg1;
- (id)_getJSONDataFromPayload:(id)arg1 withFileUUID:(id)arg2 forEventUUID:(id)arg3;
- (id)_storeJSONData:(id)arg1 withFileUUID:(id)arg2 forEventUUID:(id)arg3;
- (void)_uploadFromFile:(id)arg1 withFileUUID:(id)arg2 forEventUUID:(id)arg3 toServerURL:(id)arg4;
- (id)_getSplunkRequestForURL:(id)arg1;
- (void)_awaitRetryingFileUUID:(id)arg1;
- (void)_incrementActiveSendCount:(id)arg1;
- (id)_newExistingFileUUIDs;
- (void)_removeFileUUID:(id)arg1 loggingError:(_Bool)arg2 forReason:(id)arg3;
- (id)_copyEscapeStringsForEventData:(id)arg1;
- (void)_decrementActiveSendCount;
- (void)_sendAllAwaitingRetry;
- (id)sendEventReturningAugmented:(id)arg1 toServerURL:(id)arg2;
- (void)dropOnSendFailure:(_Bool)arg1;
- (void)flushEvent;
- (void)indicateOnceIdle:(CDUnknownBlockType)arg1;

@end
