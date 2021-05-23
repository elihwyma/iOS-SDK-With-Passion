/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSArray, NSString, NSURL;

@interface DMFOpenURLRequest

{
    _Bool _lockInApp;
    NSURL *_url;
    NSString *_URLDisplayName;
    NSArray *_handlingBundleIdentifiers;
}

@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *URLDisplayName;
@property (nonatomic) _Bool lockInApp;
@property (copy, nonatomic) NSArray *handlingBundleIdentifiers;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
