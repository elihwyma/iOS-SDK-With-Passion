/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HKObjectType, NSString;

@interface HDAppSubscription : NSObject

{
    NSString *_bundleIdentifier;
    long long _dataCode;
    unsigned long long _updateFrequency;
    unsigned long long _lastAnchor;
    long long _lastAckTime;
    long long _launchTimeHysteresis;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) long long dataCode;
@property (copy, nonatomic, readonly) HKObjectType *objectType;
@property (nonatomic, readonly) unsigned long long updateFrequency;
@property (nonatomic, readonly) unsigned long long lastAnchor;
@property (nonatomic, readonly) long long lastAckTime;
@property (nonatomic, readonly) long long launchTimeHysteresis;

- (id)init;
- (void)setLastAnchor:(unsigned long long)arg1;
- (id)initWithBundleIdentifier:(id)arg1 dataCode:(long long)arg2;
- (void)setUpdateFrequency:(unsigned long long)arg1;
- (void)setLastAckTime:(long long)arg1;
- (void)setLaunchTimeHysteresis:(long long)arg1;

@end
