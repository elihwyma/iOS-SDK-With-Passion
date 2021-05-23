/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderAppsResponse : NSObject

{
    NSArray *_providerAppAdamIDs;
    NSArray *_channelMappings;
}

@property (copy, nonatomic) NSArray *providerAppAdamIDs;
@property (copy, nonatomic) NSArray *channelMappings;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
