/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogLiteOperators/PLBasebandMessage.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface PLBBMavHwRfGSMLogMsg : PLBasebandMessage

{
    unsigned char _inited;
    NSString *_error;
    NSNumber *_logDuration;
    NSArray *_connState;
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
@property (retain) NSArray *connState;

+ (id)entryEventBackwardDefinitionBBMavHwRfGSM;

- (id)init;
- (void)refreshRequest;
- (void)setHeaderWithSeqNum:(id)arg1 andDate:(id)arg2 andTimeCal:(double)arg3;
- (void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3;
- (void)addPairWithKey:(id)arg1 andWithVal:(id)arg2;
- (void)populateEntry:(id)arg1;
- (id)logEventBackwardBBMavHwRfGSM;
- (void)logEventBackwardGroupEntriesMav10BBHwRfWcdma;

@end
