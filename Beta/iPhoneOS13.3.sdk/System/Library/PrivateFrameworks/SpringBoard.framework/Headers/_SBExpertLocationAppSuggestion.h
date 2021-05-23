/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/_SBExpertAppSuggestion.h>

@interface _SBExpertLocationAppSuggestion : _SBExpertAppSuggestion

- (id)launchURL;
- (id)originatingBundleIdentifier;
- (id)suggestedLocationName;
- (_Bool)launchURLRequiresInboxCopy;
- (id)makeInboxCopyOfLaunchURLToInboxURL:(id)arg1;
- (_Bool)isLocationPredictionOfType:(unsigned long long)arg1;
- (_Bool)isLocationPredictionFromSource:(unsigned long long)arg1;
- (_Bool)isEligibleForLockScreen;

@end
