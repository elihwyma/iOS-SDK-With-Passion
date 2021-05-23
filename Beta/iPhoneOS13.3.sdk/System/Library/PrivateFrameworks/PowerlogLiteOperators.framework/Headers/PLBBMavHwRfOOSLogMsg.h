/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogLiteOperators/PLBasebandMessage.h>

@class NSArray, NSMutableDictionary, NSNumber, NSString;

@interface PLBBMavHwRfOOSLogMsg : PLBasebandMessage

{
    unsigned char _oosInProgress;
    unsigned char _inited;
    NSString *_error;
    NSNumber *_logDuration;
    NSNumber *_oosTimes;
    NSNumber *_oosTicks;
    NSNumber *_pssiTicks;
    NSArray *_oosLtePssiTimes;
    NSArray *_oosLtePssiStatTicks;
    NSArray *_oosGsmPssiTimes;
    NSArray *_oosGsmPssiStatTicks;
    NSArray *_oosWcdmaPssiTimes;
    NSArray *_oosWcdmaPssiStatTicks;
    NSArray *_oosTdsPssiTimes;
    NSArray *_oosTdsPssiStatTicks;
    NSMutableDictionary *_commonInfo;
    NSMutableDictionary *_kvPairs;
}

@property (nonatomic) unsigned char inited;
@property (retain, nonatomic) NSMutableDictionary *commonInfo;
@property (retain, nonatomic) NSMutableDictionary *kvPairs;
@property (retain) NSString *error;
@property (retain) NSNumber *logDuration;
@property unsigned char oosInProgress;
@property (retain) NSNumber *oosTimes;
@property (retain) NSNumber *oosTicks;
@property (retain) NSNumber *pssiTicks;
@property (retain) NSArray *oosLtePssiTimes;
@property (retain) NSArray *oosLtePssiStatTicks;
@property (retain) NSArray *oosGsmPssiTimes;
@property (retain) NSArray *oosGsmPssiStatTicks;
@property (retain) NSArray *oosWcdmaPssiTimes;
@property (retain) NSArray *oosWcdmaPssiStatTicks;
@property (retain) NSArray *oosTdsPssiTimes;
@property (retain) NSArray *oosTdsPssiStatTicks;

+ (id)entryEventBackwardDefinitionOOSPerRat;

- (id)init;
- (void)setHeaderWithSeqNum:(id)arg1 andDate:(id)arg2 andTimeCal:(double)arg3;
- (void)populateEntry:(id)arg1;
- (void)refreshBBMavHwRfOOS;
- (id)logEventBackwardBBMavHwRfOos;

@end
