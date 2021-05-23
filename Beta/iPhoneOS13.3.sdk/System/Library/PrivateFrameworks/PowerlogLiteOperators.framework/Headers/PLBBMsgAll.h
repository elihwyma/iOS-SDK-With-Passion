/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogLiteOperators/PLBBMsgRoot.h>

@class NSDate, NSMutableDictionary, NSNumber, NSString;

@interface PLBBMsgAll : PLBBMsgRoot

{
    NSNumber *_seqNum;
    NSDate *_bbDate;
    NSString *_payload;
    NSString *_error;
    NSMutableDictionary *_info;
    NSNumber *_iseqNum;
    NSDate *_ibbDate;
    NSString *_ieventCode;
    NSString *_ipayload;
    NSString *_ierror;
}

@property (retain) NSNumber *iseqNum;
@property (retain) NSDate *ibbDate;
@property (retain) NSString *ieventCode;
@property (retain) NSString *ipayload;
@property (retain) NSString *ierror;
@property (retain) NSNumber *seqNum;
@property (retain) NSDate *bbDate;
@property (retain) NSString *payload;
@property (retain) NSString *error;
@property (retain) NSMutableDictionary *info;

+ (id)entryEventNoneBBMsgAll;

- (void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3;
- (void)setISeqNum:(id)arg1;
- (void)refreshBBMsgAll;
- (void)logEventNoneBBMsgAll;

@end
