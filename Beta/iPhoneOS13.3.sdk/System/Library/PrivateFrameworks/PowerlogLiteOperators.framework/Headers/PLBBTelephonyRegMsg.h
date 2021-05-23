/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogLiteOperators/PLBasebandMessage.h>

@class NSDate, NSDictionary, NSNumber, NSString;

@interface PLBBTelephonyRegMsg : PLBasebandMessage

{
    unsigned char _changed;
    NSNumber *_cellID;
    NSNumber *_lac;
    NSNumber *_dataAttached;
    NSNumber *_dataActive;
    NSString *_dataIndicator;
    NSNumber *_homeNetwork;
    NSString *_registrationStatus;
    NSString *_operatorName;
    NSDate *_timeUpdate;
    NSDictionary *_telRegInfo;
}

@property unsigned char changed;
@property (retain) NSNumber *cellID;
@property (retain) NSNumber *lac;
@property (retain) NSNumber *dataAttached;
@property (retain) NSNumber *dataActive;
@property (retain) NSString *dataIndicator;
@property (retain) NSNumber *homeNetwork;
@property (retain) NSString *registrationStatus;
@property (retain) NSString *operatorName;
@property (retain) NSDate *timeUpdate;
@property (retain) NSDictionary *telRegInfo;

+ (id)bbEuLogMsgNameTelephonyReg;

- (id)init;
- (void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3;
- (void)logEventPointTelephonyRegistration;
- (void)logEventPointTelephonyRegistrationAtInit;
- (id)humanReadableRegistrationStatus:(id)arg1;
- (id)humanReadableDataIndicator:(id)arg1;
- (void)setAttrCellID:(id)arg1;
- (void)setAttrLac:(id)arg1;
- (void)setAttrDataAttached:(id)arg1;
- (void)setAttrDataActive:(id)arg1;
- (void)setAttrDataIndicator:(id)arg1;
- (void)setAttrHomeNetwork:(id)arg1;
- (void)setAttrRegistrationStatus:(id)arg1;
- (void)setAttrOperatorName:(id)arg1;
- (void)fillPLEntryAndSend:(id)arg1;
- (void)processTelReg;
- (void)refreshTelephonyReg;

@end
