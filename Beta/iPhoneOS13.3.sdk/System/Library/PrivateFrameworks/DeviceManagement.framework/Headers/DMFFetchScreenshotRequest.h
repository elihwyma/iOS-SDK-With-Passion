/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSString;

@interface DMFFetchScreenshotRequest

{
    _Bool _usesPixels;
    unsigned long long _maxWidth;
    unsigned long long _maxHeight;
    NSString *_sessionToken;
}

@property (nonatomic) unsigned long long maxWidth;
@property (nonatomic) unsigned long long maxHeight;
@property (nonatomic) _Bool usesPixels;
@property (copy, nonatomic) NSString *sessionToken;

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
