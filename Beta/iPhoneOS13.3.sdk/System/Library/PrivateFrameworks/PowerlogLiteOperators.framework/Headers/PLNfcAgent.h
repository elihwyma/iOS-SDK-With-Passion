/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLAgent.h>

@class NSDate, PLEntryNotificationOperatorComposition, PLXPCListenerOperatorComposition;

@interface PLNfcAgent : PLAgent

{
    PLXPCListenerOperatorComposition *_cardNotification;
    PLXPCListenerOperatorComposition *_fieldNotification;
    PLXPCListenerOperatorComposition *_transactionNotification;
    PLXPCListenerOperatorComposition *_tsmCommunicationNotification;
    PLEntryNotificationOperatorComposition *_nfcPowerCountersNotification;
    double _onPower;
    NSDate *_lastPowerCountersLogTime;
}

@property (retain) PLXPCListenerOperatorComposition *cardNotification;
@property (retain) PLXPCListenerOperatorComposition *fieldNotification;
@property (retain) PLXPCListenerOperatorComposition *transactionNotification;
@property (retain) PLXPCListenerOperatorComposition *tsmCommunicationNotification;
@property (retain) PLEntryNotificationOperatorComposition *nfcPowerCountersNotification;
@property double onPower;
@property (retain) NSDate *lastPowerCountersLogTime;

+ (void)load;
+ (id)defaults;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitionCard;
+ (id)entryEventForwardDefinitionField;
+ (id)entryEventForwardDefinitionTransaction;
+ (id)entryEventForwardDefinitionTSMCommunication;
+ (id)entryEventIntervalDefinitionPower;

- (id)init;
- (void)initOperatorDependancies;
- (void)initTaskOperatorDependancies;
- (void)fieldChangedWithEntry:(id)arg1;
- (void)setUpNfcPowerCounterRetrieval;
- (void)retrieveAndLogNfcPowerCountersWithRetry:(_Bool)arg1;

@end
