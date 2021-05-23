/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSArray, NSData, NSDictionary, NSNumber;

@interface ASDClaimApplicationsRequestOptions : ASDRequestOptions

{
    _Bool _establishesActiveAccount;
    _Bool _ignoresPreviousClaimAttempts;
    _Bool _suppressErrorDialogs;
    NSNumber *_accountID;
    NSData *_clientAuditTokenData;
    NSArray *_bundleIdentifiers;
    long long _claimStyle;
    NSDictionary *_httpHeaders;
    NSNumber *_purchaseID;
}

@property (copy, nonatomic) NSNumber *accountID;
@property (copy, nonatomic) NSData *clientAuditTokenData;
@property (nonatomic, readonly) NSArray *bundleIdentifiers;
@property (nonatomic, readonly) long long claimStyle;
@property (nonatomic) _Bool establishesActiveAccount;
@property (copy, nonatomic) NSDictionary *httpHeaders;
@property (nonatomic) _Bool ignoresPreviousClaimAttempts;
@property (copy, nonatomic) NSNumber *purchaseID;
@property (nonatomic) _Bool suppressErrorDialogs;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleIdentifiers:(id)arg1;
- (id)initWithClaimStyle:(long long)arg1;

@end
