/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogLiteOperators/PLBasebandMessage.h>

@class NSArray, NSMutableDictionary, NSNumber, NSString;

@interface PLBBMavHwRfTDSLogMsg : PLBasebandMessage

{
    unsigned char _inited;
    NSString *_error;
    NSNumber *_logDuration;
    NSArray *_srvcTypeCnt;
    NSArray *_rxdStateCnt;
    NSMutableDictionary *_commonInfo;
    NSMutableDictionary *_kvPairs;
}

@property (nonatomic) unsigned char inited;
@property (retain, nonatomic) NSMutableDictionary *commonInfo;
@property (retain, nonatomic) NSMutableDictionary *kvPairs;
@property (retain) NSString *error;
@property (retain) NSNumber *logDuration;
@property (retain) NSArray *srvcTypeCnt;
@property (retain) NSArray *rxdStateCnt;

+ (id)entryEventBackwardDefinitionBBMavHwRfTDS;

- (id)init;
- (void)refreshRequest;
- (void)setHeaderWithSeqNum:(id)arg1 andDate:(id)arg2 andTimeCal:(double)arg3;
- (void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3;
- (void)addPairWithKey:(id)arg1 andWithVal:(id)arg2;
- (void)populateEntry:(id)arg1;
- (id)logEventBackwardBBMavHwRfTDS;

@end
