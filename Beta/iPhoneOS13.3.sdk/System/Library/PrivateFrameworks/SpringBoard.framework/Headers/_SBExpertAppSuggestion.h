/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBBestAppSuggestion.h>

@class NSUUID, _DECAppItem, _DECResult;

@interface _SBExpertAppSuggestion : SBBestAppSuggestion

{
    _DECAppItem *_appSuggestion;
    _DECResult *_result;
}

@property (nonatomic, readonly) _DECAppItem *appSuggestion;
@property (nonatomic, readonly) _DECResult *result;
@property (nonatomic, readonly) NSUUID *resultUUID;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)bundleIdentifier;
- (id)originatingDeviceName;
- (_Bool)isPrediction;
- (_Bool)isLocationBasedSuggestion;
- (_Bool)isBluetoothAudioPrediction;
- (_Bool)isBluetoothPrediction;
- (_Bool)isHeadphonesPrediction;
- (_Bool)isFirstWakePrediction;
- (_Bool)isArrivedAtHomePrediction;
- (_Bool)isArrivedAtWorkPrediction;
- (_Bool)isLocallyGeneratedSuggestion;
- (_Bool)isCarPlayPrediction;
- (id)initWithAppSuggestion:(id)arg1 result:(id)arg2;

@end
