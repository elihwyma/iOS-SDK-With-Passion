/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogLiteOperators/PLBBMsgRoot.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface PLBBMav16BHwRfLTELogMsg : PLBBMsgRoot

{
    unsigned char _inited;
    NSString *_error;
    NSArray *_dlTBSzCnt;
    NSNumber *_logDuration;
    NSNumber *_dupMode;
    NSNumber *_PCCFreq;
    NSNumber *_PCCBw;
    NSNumber *_SCC1Freq;
    NSNumber *_SCC1Bw;
    NSNumber *_SCC2Freq;
    NSNumber *_SCC2Bw;
    NSNumber *_SCC3Freq;
    NSNumber *_SCC3Bw;
    NSArray *_txPwrCnt;
    NSArray *_caSCCCnt;
    NSArray *_ulCaSCCCnt;
    NSArray *_actRxTxCnt;
    NSArray *_sleepStateIdleCnt;
    NSArray *_sleepStateConnCnt;
    NSArray *_rsrpIdleCnt;
    NSArray *_rsrpConnCnt;
    NSArray *_sinrIdleCnt;
    NSArray *_sinrConnCnt;
    NSArray *_arxStateCnt;
    NSArray *_nlicStateCnt;
    NSArray *_bpeStats;
    NSNumber *_ardRxDOff;
    NSNumber *_uSleepPCCCnt;
    NSNumber *_uSleepSCC1Cnt;
    NSNumber *_uSleepSCC2Cnt;
    NSNumber *_uSleepSCC3Cnt;
    NSArray *_hsicPCC;
    NSArray *_hsicSCC1;
    NSArray *_hsicSCC2;
    NSArray *_hsicSCC3;
    NSNumber *_arxOffPCC;
    NSNumber *_arxOffSCC1;
    NSNumber *_arxOffSCC2;
    NSNumber *_arxOffSCC3;
    NSNumber *_arxBaselinePCC;
    NSNumber *_arxBaselineSCC1;
    NSNumber *_arxBaselineSCC2;
    NSNumber *_arxBaselineSCC3;
    NSNumber *_arxQicePCC;
    NSNumber *_arxQiceSCC1;
    NSNumber *_arxQiceSCC2;
    NSNumber *_arxQiceSCC3;
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
@property (retain) NSArray *dlTBSzCnt;
@property (retain) NSNumber *logDuration;
@property (retain) NSNumber *dupMode;
@property (retain) NSNumber *PCCFreq;
@property (retain) NSNumber *PCCBw;
@property (retain) NSNumber *SCC1Freq;
@property (retain) NSNumber *SCC1Bw;
@property (retain) NSNumber *SCC2Freq;
@property (retain) NSNumber *SCC2Bw;
@property (retain) NSNumber *SCC3Freq;
@property (retain) NSNumber *SCC3Bw;
@property (retain) NSArray *txPwrCnt;
@property (retain) NSArray *caSCCCnt;
@property (retain) NSArray *ulCaSCCCnt;
@property (retain) NSArray *actRxTxCnt;
@property (retain) NSArray *sleepStateIdleCnt;
@property (retain) NSArray *sleepStateConnCnt;
@property (retain) NSArray *rsrpIdleCnt;
@property (retain) NSArray *rsrpConnCnt;
@property (retain) NSArray *sinrIdleCnt;
@property (retain) NSArray *sinrConnCnt;
@property (retain) NSArray *arxStateCnt;
@property (retain) NSArray *nlicStateCnt;
@property (retain) NSArray *bpeStats;
@property (retain) NSNumber *ardRxDOff;
@property (retain) NSNumber *uSleepPCCCnt;
@property (retain) NSNumber *uSleepSCC1Cnt;
@property (retain) NSNumber *uSleepSCC2Cnt;
@property (retain) NSNumber *uSleepSCC3Cnt;
@property (retain) NSArray *hsicPCC;
@property (retain) NSArray *hsicSCC1;
@property (retain) NSArray *hsicSCC2;
@property (retain) NSArray *hsicSCC3;
@property (retain) NSNumber *arxOffPCC;
@property (retain) NSNumber *arxOffSCC1;
@property (retain) NSNumber *arxOffSCC2;
@property (retain) NSNumber *arxOffSCC3;
@property (retain) NSNumber *arxBaselinePCC;
@property (retain) NSNumber *arxBaselineSCC1;
@property (retain) NSNumber *arxBaselineSCC2;
@property (retain) NSNumber *arxBaselineSCC3;
@property (retain) NSNumber *arxQicePCC;
@property (retain) NSNumber *arxQiceSCC1;
@property (retain) NSNumber *arxQiceSCC2;
@property (retain) NSNumber *arxQiceSCC3;

+ (id)entryEventBackwardDefinitionBBMav16BHwRfLTE;

- (id)init;
- (void)setHeaderWithSeqNum:(id)arg1 andDate:(id)arg2 andTimeCal:(double)arg3;
- (id)logEventBackwardBBMav16BHwRfLTE;
- (void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3;
- (void)populateMav16BEntry:(id)arg1;
- (void)addPairWithKey:(id)arg1 andWithVal:(id)arg2;
- (void)refreshMav16BBBRfLTE;

@end
