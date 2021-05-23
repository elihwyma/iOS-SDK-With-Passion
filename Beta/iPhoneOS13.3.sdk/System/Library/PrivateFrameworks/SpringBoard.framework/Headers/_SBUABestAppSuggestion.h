/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBBestAppSuggestion.h>

@class UABestAppSuggestion;

@interface _SBUABestAppSuggestion : SBBestAppSuggestion

{
    UABestAppSuggestion *_appSuggestion;
}

@property (nonatomic, readonly) UABestAppSuggestion *appSuggestion;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)bundleIdentifier;
- (id)activityType;
- (id)uniqueIdentifier;
- (id)originatingDeviceType;
- (id)originatingDeviceName;
- (id)lastUpdateTime;
- (id)originatingDeviceIdentifier;
- (_Bool)isLocationBasedSuggestion;
- (_Bool)isLocallyGeneratedSuggestion;
- (_Bool)isCallContinuitySuggestion;
- (id)initWithAppSuggestion:(id)arg1;
- (_Bool)isNotificationSuggestion;
- (_Bool)isOpenURLSuggestion;
- (_Bool)isHandoff;

@end
