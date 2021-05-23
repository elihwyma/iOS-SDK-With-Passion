/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogLiteOperators/PLBasebandMessage.h>

@class NSMutableDictionary, NSNumber, NSString;

@interface PLBBMavHwRfHDRLogMsg : PLBasebandMessage

{
    unsigned char _inited;
    NSString *_error;
    NSNumber *_logDuration;
    NSNumber *_sDTXOnFrame;
    NSNumber *_sDTXOffFrame;
    NSNumber *_lDTXOnFrame;
    NSNumber *_lDTXOffFrame;
    NSNumber *_tDTXOnFrame;
    NSNumber *_tDTXOffFrame;
    NSMutableDictionary *_commonInfo;
    NSMutableDictionary *_kvPairs;
}

@property (nonatomic) unsigned char inited;
@property (retain, nonatomic) NSMutableDictionary *commonInfo;
@property (retain, nonatomic) NSMutableDictionary *kvPairs;
@property (retain) NSString *error;
@property (retain) NSNumber *logDuration;
@property (retain) NSNumber *sDTXOnFrame;
@property (retain) NSNumber *sDTXOffFrame;
@property (retain) NSNumber *lDTXOnFrame;
@property (retain) NSNumber *lDTXOffFrame;
@property (retain) NSNumber *tDTXOnFrame;
@property (retain) NSNumber *tDTXOffFrame;

+ (id)entryEventBackwardDefinitionBBMavHwRfHDR;

- (id)init;
- (void)refreshRequest;
- (void)setHeaderWithSeqNum:(id)arg1 andDate:(id)arg2 andTimeCal:(double)arg3;
- (void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3;
- (void)addPairWithKey:(id)arg1 andWithVal:(id)arg2;
- (void)populateEntry:(id)arg1;
- (id)logEventBackwardBBMavHwRfHDR;

@end
