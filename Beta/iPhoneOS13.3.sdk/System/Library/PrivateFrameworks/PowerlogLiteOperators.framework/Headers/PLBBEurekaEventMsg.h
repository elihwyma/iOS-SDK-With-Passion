/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogLiteOperators/PLBasebandMessage.h>

@class NSMutableDictionary, NSMutableString;

@interface PLBBEurekaEventMsg : PLBasebandMessage

{
    unsigned char _inited;
    NSMutableString *_sdEvent;
    NSMutableString *_sdAct;
    NSMutableString *_sdState;
    NSMutableDictionary *_commonInfo;
    NSMutableDictionary *_kvPairs;
}

@property (nonatomic) unsigned char inited;
@property (retain, nonatomic) NSMutableString *sdEvent;
@property (retain, nonatomic) NSMutableString *sdAct;
@property (retain, nonatomic) NSMutableString *sdState;
@property (retain, nonatomic) NSMutableDictionary *commonInfo;
@property (retain, nonatomic) NSMutableDictionary *kvPairs;

+ (id)bbEuEvMsgNameCMCDMAExit;
+ (id)bbEuEvMsgNameSDEventActionCode;
+ (id)bbEuEvMsgNameWCDMARRCState;
+ (id)bbEuEvMsgNameLTERRCState;
+ (id)bbEuEvMsgUTRANRRCState;
+ (id)bbEuEvMsgNameGSML1State;
+ (id)bbEuEvMsgNameCMCallEventOrig;
+ (id)bbEuEvMsgNameCMCallEventOrigV2;
+ (id)bbEuEvMsgNameCMCallEventEndV2;
+ (id)bbEuEvMsgNameCMCallEventEnd;
+ (id)bbEuEvMsgNameCMCallEventConn;
+ (id)bbEuEvMsgNameBBEurekaMsgLite;
+ (id)bbEuEvMsgEventNotProcessed;
+ (id)bbEuEvMsgNameCMCallEventConnV2;
+ (id)bbEuEvMsgNameCMCallEventIncom;

- (id)init;
- (void)setError:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setHeaderWithSeqNum:(id)arg1 andDate:(id)arg2 andTimeCal:(double)arg3;
- (void)appendToError:(id)arg1;
- (void)addPairWithKey:(id)arg1 andWithVal:(id)arg2;
- (void)setEventCode:(unsigned int)arg1;
- (void)setSDEventActionCodeWith:(id)arg1 andSDAction:(id)arg2 andSDState:(id)arg3;
- (void)logEventForwardSDEventActionCode;
- (void)logEventCMCallEventConnWithId:(id)arg1 andCallType:(id)arg2 andSysMode:(id)arg3;
- (void)logEventCMCallEventEndWithId:(id)arg1 andNumCalls:(id)arg2;
- (void)logEventCMCallEventOrigWithId:(id)arg1 andCallType:(id)arg2 andSrvType:(id)arg3;
- (void)logEventCMCallEventConnWithId:(id)arg1 andCallType:(id)arg2 andSysMode:(id)arg3 andClientId:(id)arg4;
- (void)logEventCMCallEventEndWithId:(id)arg1 andNumCalls:(id)arg2 andClientId:(id)arg3;
- (void)logEventCMCallEventOrigWithId:(id)arg1 andCallType:(id)arg2 andSrvType:(id)arg3 andClientId:(id)arg4;
- (void)logEventPointCMExitCodeWithState:(id)arg1;
- (void)logEventForwardGSML1StateWith:(id)arg1;
- (void)logEventForwardWCDMARRCPrevStateAs:(id)arg1 andCurrState:(id)arg2 andRate:(id)arg3;
- (void)logEventForwardLTERRCStateAs:(id)arg1;
- (void)logEventForwardUTRANRRCNextStateAs:(id)arg1 andCurrStateAs:(id)arg2 andRateAs:(id)arg3;
- (void)logEventNoneEventNotProcessed;
- (void)logEventForwardBBEurekaEventMsgLite;
- (void)sendAndLogPLEntry:(id)arg1;
- (void)refreshBBEurekaEventMsgLite;
- (void)refreshSDEventActionCode;
- (void)refreshWCDMARRCState;
- (void)refreshLTERRCState;
- (void)refreshUTRANRRCState;
- (void)refreshEventNotProcessed;

@end
