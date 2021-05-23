/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface VSSubscriptionSource : NSObject

{
    long long _kind;
    NSString *_identifier;
}

@property (nonatomic) long long kind;
@property (copy, nonatomic) NSString *identifier;

+ (_Bool)supportsSecureCoding;
+ (id)currentSource;
+ (id)subscriptionSourceForAppWithBundleID:(id)arg1;
+ (id)subscriptionSourceForWebsiteWithDomainName:(id)arg1;
+ (id)subscriptionSourceForWebsiteWithURL:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
