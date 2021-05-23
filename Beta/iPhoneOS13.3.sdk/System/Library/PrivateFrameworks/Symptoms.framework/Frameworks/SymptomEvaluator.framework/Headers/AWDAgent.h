/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class AWDServerConnection, NSSet;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWDAgent : NSObject

{
    id dropboxObserver;
    NSObject<OS_dispatch_queue> *_queue;
    AWDServerConnection *_symptomsAWDConnection;
    AWDServerConnection *_libnetcoreAWDConnection;
    AWDServerConnection *_cfnetworkAWDConnection;
    NSSet *_awdSymptomsConfiguredMetricIds;
    NSSet *_awdLibnetcoreConfiguredMetricIds;
    NSSet *_awdCFNetworkConfiguredMetricIds;
}

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) AWDServerConnection *symptomsAWDConnection;
@property (retain) AWDServerConnection *libnetcoreAWDConnection;
@property (retain) AWDServerConnection *cfnetworkAWDConnection;
@property (retain, nonatomic) NSSet *awdSymptomsConfiguredMetricIds;
@property (retain, nonatomic) NSSet *awdLibnetcoreConfiguredMetricIds;
@property (retain, nonatomic) NSSet *awdCFNetworkConfiguredMetricIds;

+ (id)defaultInstance;

- (id)init;
- (void)dealloc;
- (void)postMetricForSignificantEventWithName:(id)arg1 errorContext:(int)arg2 error:(id)arg3 status:(int)arg4;
- (void)postMetricForSignificantEvent:(int)arg1 errorContext:(int)arg2 error:(id)arg3 status:(int)arg4;
- (void)postMetric:(id)arg1 withIdentifier:(unsigned int)arg2;
- (void)_handleQuery:(unsigned int)arg1;
- (_Bool)shouldSendMetric:(unsigned int)arg1;
- (void)postMetric:(id)arg1 withIdentifier:(unsigned int)arg2 libnetcore:(_Bool)arg3;
- (void)bulkPostMetrics:(id)arg1 withIdentifier:(unsigned int)arg2 libnetcore:(_Bool)arg3;
- (_Bool)overridePostMetricConfig;
- (void)_postMetricForSignificantEvent:(int)arg1 orEventName:(id)arg2 errorContext:(int)arg3 error:(id)arg4 status:(int)arg5;

@end
