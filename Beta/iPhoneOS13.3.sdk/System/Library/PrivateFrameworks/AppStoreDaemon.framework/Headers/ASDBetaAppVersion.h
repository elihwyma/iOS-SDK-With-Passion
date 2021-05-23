/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSString;

@interface ASDBetaAppVersion : NSObject <Swift>

{
    NSString *_bundleID;
    NSString *_bundleVersion;
    NSString *_shortVersion;
}

@property (copy) NSString *bundleID;
@property (copy) NSString *bundleVersion;
@property (copy) NSString *shortVersion;

+ (_Bool)supportsSecureCoding;
+ (id)versionWithBundleID:(id)arg1 bundleVersion:(id)arg2 andShortVersion:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
