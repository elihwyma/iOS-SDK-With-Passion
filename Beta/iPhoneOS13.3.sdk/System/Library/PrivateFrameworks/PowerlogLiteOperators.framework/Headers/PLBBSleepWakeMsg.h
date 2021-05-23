/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogLiteOperators/PLBBMsgRoot.h>

@class NSData, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface PLBBSleepWakeMsg : PLBBMsgRoot

{
    NSString *_swReason;
    NSString *_bbWakeChannel;
    NSString *_bbWakeType;
    NSString *_bbWakeSubType;
    NSData *_bbWakeDataBin;
    NSDictionary *_bbWakeDataParsed;
    NSString *_qmiSvcType;
    NSString *_qmiClntId;
    NSString *_qmiMsgId;
    NSString *_qmiMsgType;
    NSString *_qmiLen;
    NSString *_ariGroupId;
    NSString *_ariMsgId;
    NSString *_ariMsgName;
    NSString *_ariLen;
    NSString *_ariSeqNum;
    NSString *_swAtCmd;
    NSString *_swRawData;
    NSNumber *_swSvcId;
    NSString *_swClientId;
    NSString *_swMsgId;
    NSString *_swMsgType;
    NSString *_swCmdName;
    NSString *_swCmdFullName;
    NSDictionary *_swIpData;
    NSString *_swRadioClass;
    NSString *_swCTData;
    NSString *_swChan;
    NSString *_swCmd;
    NSMutableDictionary *_commonInfo;
    NSMutableDictionary *_kvPairs;
}

@property (retain, nonatomic) NSMutableDictionary *commonInfo;
@property (retain, nonatomic) NSMutableDictionary *kvPairs;
@property (retain) NSString *swReason;
@property (retain) NSString *bbWakeChannel;
@property (retain) NSString *bbWakeType;
@property (retain) NSString *bbWakeSubType;
@property (retain) NSData *bbWakeDataBin;
@property (retain) NSDictionary *bbWakeDataParsed;
@property (retain) NSString *qmiSvcType;
@property (retain) NSString *qmiClntId;
@property (retain) NSString *qmiMsgId;
@property (retain) NSString *qmiMsgType;
@property (retain) NSString *qmiLen;
@property (retain) NSString *ariGroupId;
@property (retain) NSString *ariMsgId;
@property (retain) NSString *ariMsgName;
@property (retain) NSString *ariLen;
@property (retain) NSString *ariSeqNum;
@property (retain) NSString *swAtCmd;
@property (retain) NSString *swRawData;
@property (retain) NSNumber *swSvcId;
@property (retain) NSString *swClientId;
@property (retain) NSString *swMsgId;
@property (retain) NSString *swMsgType;
@property (retain) NSString *swCmdName;
@property (retain) NSString *swCmdFullName;
@property (retain) NSDictionary *swIpData;
@property (retain) NSString *swRadioClass;
@property (retain) NSString *swCTData;
@property (retain) NSString *swChan;
@property (retain) NSString *swCmd;

+ (id)entryEventPointDefinitionSleepWakeActivityMavABM;
+ (id)entryEventPointDefinitionSleepWakeActivityIceABM;

- (void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3;
- (void)refreshSleepWakeActivity;
- (void)logEventPointSleepWakeABM;

@end
