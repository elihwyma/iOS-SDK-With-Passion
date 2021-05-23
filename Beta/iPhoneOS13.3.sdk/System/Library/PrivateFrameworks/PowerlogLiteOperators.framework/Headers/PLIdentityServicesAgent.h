/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLAgent.h>

@class NSDate, NSMutableDictionary, PLXPCListenerOperatorComposition;

@interface PLIdentityServicesAgent : PLAgent

{
    PLXPCListenerOperatorComposition *_networkStatsHandler;
    PLXPCListenerOperatorComposition *_infraWiFiRequestHandler;
    PLXPCListenerOperatorComposition *_localLinkTypeHandler;
    PLXPCListenerOperatorComposition *_ipsecLinkTypeHandler;
    PLXPCListenerOperatorComposition *_cloudMessagingHandler;
    NSMutableDictionary *_previousStatsByPriority;
    NSDate *_initialEntryDate;
    NSDate *_lastLocalDeliveryLogDate;
    NSMutableDictionary *_lastEntryDatePerCategory;
    long long _currentLinkType;
}

@property (retain) PLXPCListenerOperatorComposition *networkStatsHandler;
@property (retain) PLXPCListenerOperatorComposition *infraWiFiRequestHandler;
@property (retain) PLXPCListenerOperatorComposition *localLinkTypeHandler;
@property (retain) PLXPCListenerOperatorComposition *ipsecLinkTypeHandler;
@property (retain) PLXPCListenerOperatorComposition *cloudMessagingHandler;
@property (retain) NSMutableDictionary *previousStatsByPriority;
@property (retain) NSDate *initialEntryDate;
@property (retain) NSDate *lastLocalDeliveryLogDate;
@property (retain) NSMutableDictionary *lastEntryDatePerCategory;
@property long long currentLinkType;

+ (void)load;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryDefinitionLocalLink;
+ (id)entryDefinitionLocalInfraWiFiRequests;
+ (id)entryDefinitionCloudMessaging;
+ (id)entryDefinitionIDSMessageStats;
+ (id)entryDefinitionIDSSocketStats;

- (id)init;
- (void)initOperatorDependancies;
- (void)initTaskOperatorDependancies;
- (void)logIDSNetworkEntries:(id)arg1;
- (void)logLocalInfraWiFiFrequests:(id)arg1;
- (void)logLocalLinkType:(unsigned long long)arg1;
- (void)logCloudMessaging:(id)arg1;
- (void)createBTAccountingEvents:(id)arg1;
- (void)createIDSAccountingEventsWithEntries:(id)arg1;
- (void)notifyLinkType:(unsigned long long)arg1;

@end
