/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface VSDeveloperSettings : NSObject

{
    _Bool _isInSetTopBoxMode;
    _Bool _cacheBusterEnabled;
    _Bool _requestTimeoutsDisabled;
    NSString *_setTopBoxBundleIdentifier;
    NSString *_setTopBoxUserToken;
    NSString *_setTopBoxIdentityProviderID;
}

@property (nonatomic) _Bool isInSetTopBoxMode;
@property (nonatomic) _Bool cacheBusterEnabled;
@property (nonatomic) _Bool requestTimeoutsDisabled;
@property (copy, nonatomic) NSString *setTopBoxBundleIdentifier;
@property (copy, nonatomic) NSString *setTopBoxUserToken;
@property (copy, nonatomic) NSString *setTopBoxIdentityProviderID;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDefaults;

@end
