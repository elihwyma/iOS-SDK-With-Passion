/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogLiteOperators/PLBBMsgRoot.h>

@class NSNumber, NSString;

@interface PLBBTelephonyActivityMsg : PLBBMsgRoot

{
    NSString *_activeBand;
    NSString *_dataStatus;
    NSString *_currentRat;
    NSString *_preferredRat;
    NSString *_campedRat;
    NSString *_callStatus;
    NSString *_airplaneMode;
    NSString *_simStatus;
    NSNumber *_signalStrength;
    NSNumber *_signalBars;
}

@property (retain) NSString *activeBand;
@property (retain) NSString *dataStatus;
@property (retain) NSString *currentRat;
@property (retain) NSString *preferredRat;
@property (retain) NSString *campedRat;
@property (retain) NSString *callStatus;
@property (retain) NSString *airplaneMode;
@property (retain) NSString *simStatus;
@property (retain) NSNumber *signalStrength;
@property (retain) NSNumber *signalBars;

+ (id)entryEventPointDefinitionTelephonyActivity;

- (void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3;
- (void)refreshTelephonyActivity;
- (void)logPointIntervalTelephonyActivityAirplaneModeChange;
- (void)logPointIntervalTelephonyActivity;

@end
