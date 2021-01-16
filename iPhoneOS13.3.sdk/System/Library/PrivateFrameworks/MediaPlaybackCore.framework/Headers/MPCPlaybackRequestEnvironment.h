//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class ICUserIdentity, MPCPlaybackDelegationProperties, MPCPrivateListeningStateSource, NSString;

@interface MPCPlaybackRequestEnvironment : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_clientIdentifier;
    NSString *_clientVersion;
    MPCPlaybackDelegationProperties *_delegationProperties;
    NSString *_requestingBundleIdentifier;
    NSString *_requestingBundleVersion;
    MPCPrivateListeningStateSource *_privateListeningStateSource;
    ICUserIdentity *_userIdentity;
}

+ (BOOL)supportsSecureCoding;
+ (id)requestEnvironmentWithUserIdentity:(id)arg1;
+ (id)activeAccountRequestEnvironment;
@property(readonly, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(readonly, copy, nonatomic) NSString *requestingBundleVersion; // @synthesize requestingBundleVersion=_requestingBundleVersion;
@property(readonly, copy, nonatomic) NSString *requestingBundleIdentifier; // @synthesize requestingBundleIdentifier=_requestingBundleIdentifier;
@property(readonly, copy, nonatomic) MPCPrivateListeningStateSource *privateListeningStateSource; // @synthesize privateListeningStateSource=_privateListeningStateSource;
@property(readonly, copy, nonatomic) MPCPlaybackDelegationProperties *delegationProperties; // @synthesize delegationProperties=_delegationProperties;
@property(readonly, copy, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(readonly, copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
// - (void).cxx_destruct;
- (id)_copyWithPlaybackRequestEnvironmentClass:(Class)arg1;
- (id)rectifiedPlaybackRequestEnvironmentForAccountManager:(id)arg1 reasons:(id )arg2;
- (id)_createStoreRequestContext;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithUserIdentity:(id)arg1;

@end
