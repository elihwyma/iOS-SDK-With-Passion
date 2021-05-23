/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSString;

@interface ASDPostPurchaseIntentBulletinRequestOptions : ASDRequestOptions

{
    NSString *_appBundleId;
    NSString *_appName;
    NSString *_iapName;
}

@property (copy, nonatomic) NSString *appBundleId;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *iapName;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
