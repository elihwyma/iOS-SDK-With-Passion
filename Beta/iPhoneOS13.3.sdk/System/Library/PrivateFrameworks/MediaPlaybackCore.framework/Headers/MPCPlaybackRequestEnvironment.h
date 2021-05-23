/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

#import <MediaPlaybackCore/Swift-Protocol.h>

@class ICUserIdentity, MPCPlaybackDelegationProperties, MPCPrivateListeningStateSource, NSString;

@interface MPCPlaybackRequestEnvironment : NSObject <Swift>

{
    NSString *_clientIdentifier;
    NSString *_clientVersion;
    MPCPlaybackDelegationProperties *_delegationProperties;
    NSString *_requestingBundleIdentifier;
    NSString *_requestingBundleVersion;
    MPCPrivateListeningStateSource *_privateListeningStateSource;
    ICUserIdentity *_userIdentity;
}

@property (copy, nonatomic, readonly) NSString *clientIdentifier;
@property (copy, nonatomic, readonly) NSString *clientVersion;
@property (copy, nonatomic, readonly) NSString *requestingBundleIdentifier;
@property (copy, nonatomic, readonly) NSString *requestingBundleVersion;
@property (copy, nonatomic, readonly) MPCPlaybackDelegationProperties *delegationProperties;
@property (copy, nonatomic, readonly) MPCPrivateListeningStateSource *privateListeningStateSource;
@property (nonatomic, readonly) ICUserIdentity *userIdentity;

+ (_Bool)supportsSecureCoding;
+ (id)activeAccountRequestEnvironment;
+ (id)requestEnvironmentWithUserIdentity:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserIdentity:(id)arg1;
- (id)_createStoreRequestContext;
- (id)rectifiedPlaybackRequestEnvironmentForAccountManager:(id)arg1 reasons:(id *)arg2;
- (id)_copyWithPlaybackRequestEnvironmentClass:(Class)arg1;

@end
