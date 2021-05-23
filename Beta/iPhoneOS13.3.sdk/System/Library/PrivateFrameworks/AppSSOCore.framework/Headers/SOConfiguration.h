/*
 Image: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface SOConfiguration : NSObject

{
    NSArray *_profiles;
}

@property (nonatomic, readonly) NSArray *profiles;
@property (nonatomic, readonly) _Bool empty;

+ (_Bool)supportsSecureCoding;
+ (id)stringWithHandleResult:(long long)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfiles:(id)arg1;
- (id)realms;
- (id)profileForURL:(id)arg1 responseCode:(long long)arg2;
- (long long)willHandleURL:(id)arg1 responseCode:(long long)arg2 callerBundleIdentifier:(id)arg3 profile:(id *)arg4;
- (_Bool)willHandleURL:(id)arg1 responseCode:(long long)arg2 callerBundleIdentifier:(id)arg3;
- (id)_profileForURLWithHostScheme:(id)arg1;
- (id)_profileForURLWithRealmScheme:(id)arg1;
- (id)_profileForURLWithStandardScheme:(id)arg1 isCredential:(_Bool)arg2;
- (_Bool)_matchHost:(id)arg1 inCredentialProfile:(id)arg2;

@end
