/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSUUID;

@interface HKObjectAuthorizationPromptSession : NSObject

{
    NSUUID *_sessionIdentifier;
    NSString *_bundleIdentifier;
    NSArray *_samplesRequiringAuthorization;
}

@property (copy, nonatomic, readonly) NSUUID *sessionIdentifier;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (copy, nonatomic, readonly) NSArray *samplesRequiringAuthorization;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initForBundleIdentifier:(id)arg1 samples:(id)arg2 sessionIdentifier:(id)arg3;

@end
