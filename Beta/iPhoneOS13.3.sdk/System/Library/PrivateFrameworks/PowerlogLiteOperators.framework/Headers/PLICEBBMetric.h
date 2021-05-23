/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSMutableDictionary, NSNumber, NSString, PLAgent, PLICEBBHardwareMessage, PLTimer;

@protocol OS_dispatch_queue;

@interface PLICEBBMetric : NSObject

{
    PLAgent *_logAgent;
    NSDictionary *_plistSimMetrics;
    NSMutableDictionary *_sendSimMetrics;
    NSMutableDictionary *_lteSimMetrics;
    NSMutableDictionary *_umtsSimMetrics;
    NSMutableDictionary *_egprsSimMetrics;
    NSMutableDictionary *_tdsSimMetrics;
    NSNumber *_error;
    PLTimer *_tickTock;
    NSString *_notifyTitle;
    NSNumber *_aPeriodicTriggerCnt;
    NSNumber *_aPeriodicProfileId;
    NSData *_aPeriodicTriggerPayload;
    NSMutableDictionary *_prodMetrics;
    PLICEBBHardwareMessage *_storeMetricsLogger;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain) NSDictionary *plistSimMetrics;
@property (retain) NSMutableDictionary *sendSimMetrics;
@property (retain) NSMutableDictionary *lteSimMetrics;
@property (retain) NSMutableDictionary *umtsSimMetrics;
@property (retain) NSMutableDictionary *egprsSimMetrics;
@property (retain) NSMutableDictionary *tdsSimMetrics;
@property (retain) NSNumber *error;
@property (retain) PLTimer *tickTock;
@property (retain) NSString *notifyTitle;
@property (retain) NSNumber *aPeriodicTriggerCnt;
@property (retain) NSNumber *aPeriodicProfileId;
@property (retain) NSData *aPeriodicTriggerPayload;
@property (retain) NSMutableDictionary *prodMetrics;
@property (retain) PLICEBBHardwareMessage *storeMetricsLogger;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) PLAgent *logAgent;

+ (id)sharedInstance;

- (void)initializeMetricsSim;
- (void)modelProdMetricsNotify;
- (void)initializeMetricsDictWithTS:(id)arg1 triggerCnt:(id)arg2 triggerId:(id)arg3;
- (void)initializeDataStoreBBTS:(id)arg1 triggerCnt:(id)arg2 triggerId:(id)arg3;
- (_Bool)registerForNotifClient:(id)arg1 andProfile:(id)arg2;
- (void)deregisterForNotifications:(id)arg1;
- (void)queuePeriodicMetricId:(id)arg1 payload:(id)arg2 forTrigger:(id)arg3;
- (void)queueAperiodicMetricId:(id)arg1 payload:(id)arg2 profileId:(id)arg3;
- (void)modelSimMetricsNotify:(id)arg1;

@end
