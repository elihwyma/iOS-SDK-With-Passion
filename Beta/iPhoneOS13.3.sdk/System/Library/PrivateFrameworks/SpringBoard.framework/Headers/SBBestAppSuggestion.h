/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSURL, NSUUID;

@interface SBBestAppSuggestion : NSObject

@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (copy, nonatomic, readonly) NSString *activityType;
@property (copy, nonatomic, readonly) NSDate *lastUpdateTime;
@property (copy, nonatomic, readonly) NSString *originatingDeviceIdentifier;
@property (copy, nonatomic, readonly) NSString *originatingDeviceName;
@property (copy, nonatomic, readonly) NSString *originatingDeviceType;
@property (copy, nonatomic, readonly) NSString *originatingBundleIdentifier;
@property (copy, nonatomic, readonly) NSString *suggestedLocationName;
@property (copy, nonatomic, readonly) NSURL *launchURL;

- (id)description;
- (_Bool)isPrediction;
- (_Bool)isLocationBasedSuggestion;
- (_Bool)isBluetoothAudioPrediction;
- (_Bool)isBluetoothPrediction;
- (_Bool)isHeadphonesPrediction;
- (_Bool)isFirstWakePrediction;
- (_Bool)launchURLRequiresInboxCopy;
- (id)makeInboxCopyOfLaunchURLToInboxURL:(id)arg1;
- (_Bool)isLocationPredictionOfType:(unsigned long long)arg1;
- (_Bool)isSiriSuggestion;
- (_Bool)isArrivedAtHomePrediction;
- (_Bool)isArrivedAtWorkPrediction;
- (_Bool)isLocationPredictionFromSource:(unsigned long long)arg1;
- (_Bool)isLocallyGeneratedSuggestion;
- (_Bool)isCarPlayPrediction;
- (_Bool)isCallContinuitySuggestion;
- (_Bool)isNotificationSuggestion;
- (_Bool)isOpenURLSuggestion;
- (_Bool)isHandoff;
- (_Bool)isEligibleForLockScreen;

@end
