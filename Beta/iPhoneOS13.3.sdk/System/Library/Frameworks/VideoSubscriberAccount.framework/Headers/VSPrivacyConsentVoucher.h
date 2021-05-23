/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface VSPrivacyConsentVoucher : NSObject

{
    NSString *_appAdamID;
    NSString *_providerID;
}

@property (copy, nonatomic, readonly) NSString *appAdamID;
@property (copy, nonatomic, readonly) NSString *providerID;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAppAdamID:(id)arg1 providerID:(id)arg2;

@end
