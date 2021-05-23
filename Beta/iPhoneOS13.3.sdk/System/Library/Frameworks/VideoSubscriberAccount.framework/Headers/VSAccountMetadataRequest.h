/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface VSAccountMetadataRequest : NSObject

{
    _Bool _includeAccountProviderIdentifier;
    _Bool _includeAuthenticationExpirationDate;
    _Bool _interruptionAllowed;
    _Bool _forceAuthentication;
    NSString *_channelIdentifier;
    NSArray *_supportedAccountProviderIdentifiers;
    NSArray *_featuredAccountProviderIdentifiers;
    NSString *_verificationToken;
    NSString *_localizedVideoTitle;
    NSArray *_attributeNames;
    NSArray *_supportedAuthenticationSchemes;
    NSString *_accountProviderAuthenticationToken;
}

@property (copy, nonatomic) NSString *channelIdentifier;
@property (copy, nonatomic) NSArray *supportedAccountProviderIdentifiers;
@property (copy, nonatomic) NSArray *featuredAccountProviderIdentifiers;
@property (copy, nonatomic) NSString *verificationToken;
@property (nonatomic) _Bool includeAccountProviderIdentifier;
@property (nonatomic) _Bool includeAuthenticationExpirationDate;
@property (copy, nonatomic) NSString *localizedVideoTitle;
@property (nonatomic, getter=isInterruptionAllowed) _Bool interruptionAllowed;
@property (nonatomic) _Bool forceAuthentication;
@property (copy, nonatomic) NSArray *attributeNames;
@property (copy, nonatomic) NSArray *supportedAuthenticationSchemes;
@property (copy, nonatomic) NSString *accountProviderAuthenticationToken;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
