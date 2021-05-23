/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDAssertion.h>

@class NSDate, NSDictionary, NSString;

@interface HDClientKeepAliveAssertion : HDAssertion

{
    long long _launchCount;
    NSDate *_lastLaunchAttempt;
    NSString *_clientBundleIdentifier;
    NSDictionary *_payloadOptions;
}

@property (nonatomic) long long launchCount;
@property (copy, nonatomic) NSDate *lastLaunchAttempt;
@property (copy, nonatomic, readonly) NSString *clientBundleIdentifier;
@property (copy, nonatomic, readonly) NSDictionary *payloadOptions;

- (id)initWithOwnerIdentifier:(id)arg1 clientBundleIdentifier:(id)arg2 payloadOptions:(id)arg3;

@end
