/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@class NSString;

@protocol SBIconContinuityInfo

@property (copy, nonatomic, readonly) NSString *originatingDeviceType;

- (unsigned short)isLocationBasedSuggestion;
- (unsigned short)isBluetoothAudioPrediction;
- (unsigned short)isBluetoothPrediction;
- (unsigned short)isHeadphonesPrediction;
- (unsigned short)isFirstWakePrediction;

@end
