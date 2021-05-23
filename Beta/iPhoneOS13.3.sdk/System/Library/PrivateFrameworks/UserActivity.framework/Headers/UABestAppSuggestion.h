/*
 Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString, NSUUID;

@interface UABestAppSuggestion : NSObject

{
    _Bool _isActive;
    unsigned long long _type;
    NSUUID *_uniqueIdentifier;
    NSDictionary *_options;
    NSString *_bundleIdentifier;
    NSString *_activityType;
    NSString *_dynamicIdentifier;
    NSDate *_lastUpdateTime;
    double _confidence;
    NSString *_originatingDeviceIdentifier;
    NSString *_originatingDeviceName;
    NSString *_originatingDeviceType;
    NSDate *_lastActiveTime;
}

@property (copy, readonly) NSString *userActivityTypeIdentifier;
@property (copy) NSUUID *uniqueIdentifier;
@property (copy) NSString *activityType;
@property (readonly) unsigned long long type;
@property (copy, readonly) NSString *bundleIdentifier;
@property (copy, readonly) NSString *dynamicIdentifier;
@property (copy, readonly) NSDate *lastUpdateTime;
@property (copy, readonly) NSDate *lastActiveTime;
@property (copy, readonly) NSDate *when;
@property (copy, readonly) NSDictionary *options;
@property (readonly) double confidence;
@property (copy, readonly) NSString *originatingDeviceIdentifier;
@property (copy, readonly) NSString *originatingDeviceName;
@property (copy, readonly) NSString *originatingDeviceType;
@property (readonly) _Bool isActive;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 uuid:(id)arg2 activityType:(id)arg3 dynamicIdentifier:(id)arg4 lastUpdateTime:(id)arg5 lastActiveTime:(id)arg6 type:(unsigned long long)arg7 deviceName:(id)arg8 deviceIdentifier:(id)arg9 deviceType:(id)arg10 options:(id)arg11 isActive:(_Bool)arg12;

@end
