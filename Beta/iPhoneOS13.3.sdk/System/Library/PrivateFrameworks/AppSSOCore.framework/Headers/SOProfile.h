/*
 Image: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SOProfile : NSObject

{
    long long _type;
    NSArray *_URLPrefix;
    NSArray *_hosts;
    NSString *_extensionBundleIdentifier;
    NSString *_realm;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) NSArray *URLPrefix;
@property (retain, nonatomic) NSArray *hosts;
@property (retain, nonatomic) NSString *extensionBundleIdentifier;
@property (retain, nonatomic) NSString *realm;

+ (_Bool)supportsSecureCoding;
+ (id)stringWithProfileType:(long long)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
