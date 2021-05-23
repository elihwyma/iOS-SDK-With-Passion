/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <CoreDuet/_DKEvent.h>

@class NSArray, NSString, TPSAnalyticsEvent;

@interface _DKEvent (TPSDiscoverabilityUsage)

@property (nonatomic, readonly) NSString *tps_contentIdentifier;
@property (nonatomic, readonly) NSString *tps_bundleIdentifier;
@property (nonatomic, readonly) unsigned long long tps_displayType;
@property (nonatomic, readonly) long long tps_state;
@property (nonatomic, readonly) long long tps_ineligibleReason;
@property (nonatomic, readonly) NSArray *tps_eligibleContext;
@property (nonatomic, readonly) NSString *tps_context;
@property (nonatomic, readonly) TPSAnalyticsEvent *tps_analyticsEvent;

+ (id)_eventWithContentIdentifier:(id)arg1 bundleIdentifier:(id)arg2 displayType:(unsigned long long)arg3 eligibleContext:(id)arg4 context:(id)arg5 state:(long long)arg6 reason:(long long)arg7 event:(id)arg8 date:(id)arg9;

@end
