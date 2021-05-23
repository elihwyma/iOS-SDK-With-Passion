/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, RTCReporting, VCAggregator;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface RTCReportingAgent : NSObject

{
    unsigned int _callID;
    RTCReporting *_reportingObject;
    void *_symptomReporter;
    NSObject<OS_dispatch_queue> *_reportingQueue;
    NSArray *_backends;
    VCAggregator *_aggregator;
    int _clientType;
    int _nextUnassignedReportingModuleID;
    NSMutableDictionary *_userInfoMap;
    _Bool _forceDisableABC;
}

@property (retain) RTCReporting *reportingObject;
@property (readonly) NSObject<OS_dispatch_queue> *reportingQueue;
@property (copy) NSArray *backends;
@property (retain) VCAggregator *aggregator;
@property int clientType;
@property (readonly) int nextUnassignedReportingModuleID;
@property (readonly) NSMutableDictionary *userInfoMap;
@property (getter=isABCForceDisabled) _Bool forceDisableABC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)didSendMessageForReportingClient:(id)arg1 event:(id)arg2;
- (int)learntBitrateForSegment:(id)arg1 defaultValue:(int)arg2;
- (void)report:(id)arg1 segmentDirection:(int)arg2;
- (void)reportQR:(id)arg1;
- (void)initAdaptiveLearningWithParameters:(id)arg1;
- (id)deriveFromParentHierarchyToken:(id)arg1;
- (id)aggregatorForClientType:(int)arg1;
- (void)sendAggregatedCallReport;
- (void)sendAggregatedSessionReport;
- (unsigned short)reportingCallMethodForClientType:(int)arg1;
- (unsigned short)reportingSessionMethodForClientType:(int)arg1;
- (unsigned short)reportingSessionTypeForClientType:(int)arg1;
- (id)initWithCallID:(unsigned int)arg1 clientType:(int)arg2 parentHierarchyToken:(id)arg3;
- (void)releaseReportingObject;
- (void)reportingSymptom:(unsigned int)arg1 withOptionalDict:(struct __CFDictionary *)arg2;
- (void)reportingSetReportCallback:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2;

@end
