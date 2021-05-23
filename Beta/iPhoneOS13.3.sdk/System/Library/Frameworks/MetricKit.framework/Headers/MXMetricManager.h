/*
 Image: /System/Library/Frameworks/MetricKit.framework/MetricKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSHashTable, NSXPCConnection;

@protocol OS_dispatch_queue, OS_os_log;

@interface MXMetricManager : NSObject

{
    int _metricToken;
    NSArray *_pastPayloads;
    NSObject<OS_dispatch_queue> *_iVarQueue;
    NSObject<OS_os_log> *_managerLogHandle;
    NSXPCConnection *_connection;
    NSHashTable *_subscribers;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *iVarQueue;
@property (retain, nonatomic) NSObject<OS_os_log> *managerLogHandle;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) int metricToken;
@property (retain) NSArray *pastPayloads;
@property (retain, nonatomic) NSHashTable *subscribers;

- (id)init;
- (void)dealloc;
- (void)removeSubscriber:(id)arg1;
- (id)_createXPCConnection;
- (void)addSubscriber:(id)arg1;
- (void)_checkAndDeliverMetricReports;
- (void)registrationProcessed;
- (_Bool)_cachedPayloadAvailable;

@end
