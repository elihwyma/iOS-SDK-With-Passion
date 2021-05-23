/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSString, VSIdentityProvider;

@interface VSIdentityProviderInfoQueryResult : NSObject

{
    _Bool _isInSetTopBoxMode;
    VSIdentityProvider *_identityProvider;
    NSString *_designatedAppBundleIdentifier;
}

@property (copy, nonatomic) VSIdentityProvider *identityProvider;
@property (copy, nonatomic) NSString *designatedAppBundleIdentifier;
@property (nonatomic) _Bool isInSetTopBoxMode;

- (id)description;

@end
