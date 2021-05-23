/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogLiteOperators/PLBasebandMessage.h>

@class NSArray, NSDate, NSMutableDictionary, NSNumber, NSString;

@interface PLBBMavHwRf1xLogMsg : PLBasebandMessage

{
    unsigned char _inited;
    NSDate *_bbDate;
    double *_bbTimeCal;
    NSNumber *_bbSeqnum;
    NSString *_error;
    NSNumber *_logDuration;
    NSNumber *_dtxOn;
    NSNumber *_dtxOff;
    NSArray *_callTypeDur;
    NSMutableDictionary *_commonInfo;
    NSMutableDictionary *_kvPairs;
}

@property (nonatomic) unsigned char inited;
@property (retain, nonatomic) NSMutableDictionary *commonInfo;
@property (retain, nonatomic) NSMutableDictionary *kvPairs;
@property (retain) NSDate *bbDate;
@property double *bbTimeCal;
@property (retain) NSNumber *bbSeqnum;
@property (retain) NSString *error;
@property (retain) NSNumber *logDuration;
@property (retain) NSNumber *dtxOn;
@property (retain) NSNumber *dtxOff;
@property (retain) NSArray *callTypeDur;

+ (id)entryEventBackwardDefinitionBBMavHwRf1x;

- (id)init;
- (void)refreshRequest;
- (void)setHeaderWithSeqNum:(id)arg1 andDate:(id)arg2 andTimeCal:(double)arg3;
- (void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3;
- (void)addPairWithKey:(id)arg1 andWithVal:(id)arg2;
- (void)populateEntry:(id)arg1;
- (id)logEventBackwardBBMavHwRf1x;

@end
