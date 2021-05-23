/*
 Image: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
 */

#import <NSObject.h>

@class NSDate, PLEntryNotificationOperatorComposition, PLSmartPLService, PLTelephonyConnection;

@interface BBSmartPL : NSObject

{
    PLSmartPLService *_operator;
    PLEntryNotificationOperatorComposition *_bbHwOtherCallback;
    NSDate *_lastLogDate;
    double _logDuration;
    double _cxoDuration;
    PLTelephonyConnection *_connection;
}

@property (weak) PLSmartPLService *operator;
@property (retain) PLEntryNotificationOperatorComposition *bbHwOtherCallback;
@property (retain) NSDate *lastLogDate;
@property double logDuration;
@property double cxoDuration;
@property (weak) PLTelephonyConnection *connection;

- (void)startWithOperator:(id)arg1;
- (void)handleMavBBHwOtherCallback:(id)arg1;
- (void)triggerBBCoreDump;

@end
