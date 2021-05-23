/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogLiteOperators/PLBasebandMessage.h>

@class NSDate, NSMutableDictionary, NSMutableString, NSNumber;

@interface PLBBEurekaLogMsg : PLBasebandMessage

{
    unsigned char _inited;
    NSDate *_bbDate;
    double *_bbTimeCal;
    NSNumber *_bbSeqNum;
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
@property (retain) NSDate *bbDate;
@property double *bbTimeCal;
@property (retain) NSNumber *bbSeqNum;

+ (id)bbEuLogMsgNameLTESleepMgrStats;
+ (id)bbEuLogMsgNameICEStats;

- (id)init;
- (void)setError:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setHeaderWithSeqNum:(id)arg1 andDate:(id)arg2 andTimeCal:(double)arg3;
- (void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3;
- (void)addPairWithKey:(id)arg1 andWithVal:(id)arg2;
- (void)setEventCode:(unsigned int)arg1;
- (void)logEventBackwardICEStats;
- (void)logEventBackwardLTESleepMgrStatsWithVer:(id)arg1 andML1State:(id)arg2 andSES:(id)arg3 andSDS:(id)arg4 andStDur:(id)arg5 andDSlpDur:(id)arg6 andLSlpDur:(id)arg7;
- (void)refreshLTESleepMgrStats;
- (void)refreshICEStats;

@end
