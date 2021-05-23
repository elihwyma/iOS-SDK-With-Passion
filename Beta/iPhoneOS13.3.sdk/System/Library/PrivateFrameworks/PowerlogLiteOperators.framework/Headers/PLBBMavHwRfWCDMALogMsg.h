/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogLiteOperators/PLBasebandMessage.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface PLBBMavHwRfWCDMALogMsg : PLBasebandMessage

{
    unsigned char _inited;
    NSString *_error;
    NSNumber *_logDuration;
    NSArray *_SCEqStatCnt;
    NSArray *_DCEqStatCnt;
    NSArray *_SCQsetEqStatCnt;
    NSArray *_DCQsetEqStatCnt;
    NSArray *_DurInCarrierMode;
    NSArray *_RABModeCnt;
    NSArray *_RABTypeCnt;
    NSArray *_TxPwrBucket;
    NSNumber *_fetCnt;
    NSNumber *_cpcRxOnCnt;
    NSNumber *_cpcRxTxOffCnt;
    NSNumber *_cpcTimeCnt;
    NSNumber *_cpcEnergy;
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
@property (retain) NSNumber *logDuration;
@property (retain) NSArray *SCEqStatCnt;
@property (retain) NSArray *DCEqStatCnt;
@property (retain) NSArray *SCQsetEqStatCnt;
@property (retain) NSArray *DCQsetEqStatCnt;
@property (retain) NSArray *DurInCarrierMode;
@property (retain) NSArray *RABModeCnt;
@property (retain) NSArray *RABTypeCnt;
@property (retain) NSArray *TxPwrBucket;
@property (retain) NSNumber *fetCnt;
@property (retain) NSNumber *cpcRxOnCnt;
@property (retain) NSNumber *cpcRxTxOffCnt;
@property (retain) NSNumber *cpcTimeCnt;
@property (retain) NSNumber *cpcEnergy;

+ (id)entryEventBackwardDefinitionBBMav16BHwRfWCDMA;
+ (id)entryEventBackwardDefinitionBBMav16HwRfWCDMA;
+ (id)entryEventBackwardDefinitionBBMavHwRfWCDMA;

- (id)init;
- (void)refreshRequest;
- (void)setHeaderWithSeqNum:(id)arg1 andDate:(id)arg2 andTimeCal:(double)arg3;
- (id)logEventBackwardBBMavHwRfWCDMA;
- (void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3;
- (void)addPairWithKey:(id)arg1 andWithVal:(id)arg2;
- (void)populateEntry:(id)arg1;

@end
