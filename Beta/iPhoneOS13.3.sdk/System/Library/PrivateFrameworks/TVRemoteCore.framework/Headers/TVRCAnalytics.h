/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@interface TVRCAnalytics : NSObject

+ (id)sharedInstance;

- (void)logPresentationFrom:(id)arg1;
- (void)logSessionStatistics:(id)arg1;
- (void)logSearchingSpinnerShown;
- (void)logConnectingSpinnerShown:(id)arg1;
- (void)logConnectionStatus:(long long)arg1 type:(long long)arg2 reason:(long long)arg3;
- (id)_presentationSourceEventDictionaryFor:(id)arg1;
- (id)_spinnerShownDictionaryFor:(id)arg1;
- (id)_connectionDictionaryForType:(id)arg1 status:(id)arg2 reason:(id)arg3;
- (void)logShortcutActionRunWithType:(id)arg1;

@end
