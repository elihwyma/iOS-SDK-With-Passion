/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSNumber, NSString, NSURL;

@interface DMFAppRequest

{
    NSString *_bundleIdentifier;
    NSNumber *_storeItemIdentifier;
    NSURL *_manifestURL;
}

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSNumber *storeItemIdentifier;
@property (copy, nonatomic) NSURL *manifestURL;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
