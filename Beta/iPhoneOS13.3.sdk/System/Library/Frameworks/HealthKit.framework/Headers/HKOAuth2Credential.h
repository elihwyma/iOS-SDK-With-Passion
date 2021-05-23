/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class NSArray, NSDate, NSString, NSUUID;

@interface HKOAuth2Credential : NSObject <Swift>

{
    NSUUID *_identifier;
    NSDate *_expiration;
    NSArray *_scope;
}

@property (copy, nonatomic, readonly) NSUUID *identifier;
@property (copy, nonatomic, readonly) NSDate *expiration;
@property (nonatomic, readonly, getter=isExpired) _Bool expired;
@property (copy, nonatomic, readonly) NSArray *scope;
@property (copy, nonatomic, readonly) NSString *scopeString;

+ (_Bool)supportsSecureCoding;
+ (id)scopeFromScopeString:(id)arg1;
+ (id)_scopeStringFromScope:(id)arg1;
+ (id)expirationFromTimeInterval:(double)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_commonInitWithIdentifier:(id)arg1 expiration:(id)arg2 scope:(id)arg3;
- (id)initWithIdentifier:(id)arg1 expiration:(id)arg2 scope:(id)arg3;
- (id)_accessTokenIdentifier;
- (id)_refreshTokenIdentifier;
- (_Bool)storeAccessToken:(id)arg1 error:(id *)arg2;
- (_Bool)storeRefreshToken:(id)arg1 error:(id *)arg2;
- (_Bool)isEqualToCredential:(id)arg1 epsilonExpiration:(double)arg2;
- (id)initWithIdentifier:(id)arg1 expiration:(id)arg2 scopeString:(id)arg3;
- (id)fetchAccessTokenWithError:(id *)arg1;
- (id)fetchRefreshTokenWithError:(id *)arg1;
- (_Bool)deleteTokensWithError:(id *)arg1;

@end
