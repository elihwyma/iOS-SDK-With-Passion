/*
 Image: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SRNotificationUsage : NSObject

{
    NSString *_bundleIdentifier;
    long long _event;
}

@property (copy) NSString *bundleIdentifier;
@property long long event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)notificationUsageWithBundleIdentifier:(id)arg1 eventType:(long long)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sr_dictionaryRepresentation;

@end
