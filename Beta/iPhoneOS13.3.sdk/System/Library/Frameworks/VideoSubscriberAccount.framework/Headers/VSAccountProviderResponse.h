/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface VSAccountProviderResponse : NSObject

{
    NSString *_authenticationScheme;
    NSString *_status;
    NSString *_body;
}

@property (copy, nonatomic) NSString *authenticationScheme;
@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSString *body;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
