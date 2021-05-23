/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FPItemID : NSObject

{
    NSString *_identifier;
    NSString *_providerID;
    NSString *_domainIdentifier;
}

@property (nonatomic, readonly) _Bool isPlaceholder;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *providerDomainID;
@property (nonatomic, readonly) NSString *providerID;
@property (nonatomic, readonly) NSString *domainIdentifier;
@property (nonatomic, readonly) NSString *providerIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)rootItemIDWithProviderIdentifier:(id)arg1 domainIdentifier:(id)arg2;
+ (id)rootItemIDWithProviderDomainID:(id)arg1;
+ (id)fpIdentifierFromCoreSpotlightIdentifier:(id)arg1 domainIdentifier:(id)arg2;
+ (id)csIdentifierFromFPIdentifier:(id)arg1 domainIdentifier:(id)arg2;
+ (id)coreSpotlightEncodedDomainIdentifier:(id)arg1;
+ (id)stringByRemovingPrefix:(id)arg1 fromIdentifier:(id)arg2;
+ (void)getDomainIdentifier:(id *)arg1 andIdentifier:(id *)arg2 fromCoreSpotlightIdentifier:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToItemID:(id)arg1;
- (id)initWithProviderID:(id)arg1 domainIdentifier:(id)arg2 itemIdentifier:(id)arg3;
- (id)initWithProviderDomainID:(id)arg1 itemIdentifier:(id)arg2;
- (void)setProviderDomainID:(id)arg1;
- (id)initWithSearchableItem:(id)arg1;
- (id)coreSpotlightIdentifier;
- (id)initWithProviderID:(id)arg1 domainIdentifier:(id)arg2 coreSpotlightIdentifier:(id)arg3;

@end
