/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogLiteOperators/PLBBMsgRoot.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface PLBBMavHwRfLTELogMsg : PLBBMsgRoot

{
    unsigned char _inited;
    NSString *_error;
    NSArray *_dlC0TBSzCnt;
    NSArray *_dlC1TBSzCnt;
    NSNumber *_logDuration;
    NSNumber *_dupMode;
    NSArray *_caFreqInfo;
    NSArray *_txPwrCnt;
    NSArray *_caSCCCnt;
    NSArray *_actRxTxCnt;
    NSArray *_sleepStateCnt;
    NSArray *_caPriCCCnt;
    NSArray *_caSecCCCnt;
    NSArray *_caPriSecCCCnt;
    NSArray *_actRxTxPriCCCnt;
    NSArray *_actRxTxSecCCCnt;
    NSArray *_actRxTxPriSecCCCnt;
    NSArray *_sleepStateIdleCnt;
    NSArray *_sleepStateConnCnt;
    NSArray *_rsrpIdleCnt;
    NSArray *_rsrpConnCnt;
    NSArray *_sinrIdleCnt;
    NSArray *_sinrConnCnt;
    NSArray *_arxStateCnt;
    NSArray *_nlicStateCnt;
    NSArray *_bpeStats;
    NSString *_groupEntryKey;
    NSString *_groupID;
    NSMutableArray *_groupArrEntries;
    NSMutableDictionary *_commonInfo;
    NSMutableDictionary *_kvPairs;
}

@property (retain) NSString *groupEntryKey;
@property (retain) NSString *groupID;
@property (retain) NSMutableArray *groupArrEntries;
@property (nonatomic) unsigned char inited;
@property (retain, nonatomic) NSMutableDictionary *commonInfo;
@property (retain, nonatomic) NSMutableDictionary *kvPairs;
@property (retain) NSString *error;
@property (retain) NSArray *dlC0TBSzCnt;
@property (retain) NSArray *dlC1TBSzCnt;
@property (retain) NSNumber *logDuration;
@property (retain) NSNumber *dupMode;
@property (retain) NSArray *caFreqInfo;
@property (retain) NSArray *txPwrCnt;
@property (retain) NSArray *caSCCCnt;
@property (retain) NSArray *actRxTxCnt;
@property (retain) NSArray *sleepStateCnt;
@property (retain) NSArray *caPriCCCnt;
@property (retain) NSArray *caSecCCCnt;
@property (retain) NSArray *caPriSecCCCnt;
@property (retain) NSArray *actRxTxPriCCCnt;
@property (retain) NSArray *actRxTxSecCCCnt;
@property (retain) NSArray *actRxTxPriSecCCCnt;
@property (retain) NSArray *sleepStateIdleCnt;
@property (retain) NSArray *sleepStateConnCnt;
@property (retain) NSArray *rsrpIdleCnt;
@property (retain) NSArray *rsrpConnCnt;
@property (retain) NSArray *sinrIdleCnt;
@property (retain) NSArray *sinrConnCnt;
@property (retain) NSArray *arxStateCnt;
@property (retain) NSArray *nlicStateCnt;
@property (retain) NSArray *bpeStats;

+ (id)entryEventBackwardDefinitionBBMav13HwRfLTE;
+ (id)entryEventBackwardDefinitionBBMav10HwRfLTE;

- (id)init;
- (void)setHeaderWithSeqNum:(id)arg1 andDate:(id)arg2 andTimeCal:(double)arg3;
- (void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3;
- (void)addPairWithKey:(id)arg1 andWithVal:(id)arg2;
- (void)populateEntry:(id)arg1;
- (id)logEventBackwardBBMav10HwRfLTE;
- (void)populateMav13Entry:(id)arg1;
- (void)refreshMav10BBRfAllRats;
- (void)refreshMav13BBRfLTE;
- (id)logEventBackwardBBMav13HwRfLTE;

@end
