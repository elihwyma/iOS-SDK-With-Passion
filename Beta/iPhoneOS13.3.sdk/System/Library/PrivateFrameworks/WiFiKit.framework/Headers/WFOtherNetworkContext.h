/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <WiFiKit/WFCredentialsContext.h>

@class NSArray, NSString, UIViewController, WFNetworkProfile, WFNetworkScanRecord, WFUserSuppliedNetwork;

@protocol WFNetworkView;

@interface WFOtherNetworkContext : WFCredentialsContext

{
    _Bool passwordSharingSupported;
    NSArray *_availableTLSIdentities;
    long long _requestedFields;
    NSString *username;
    WFNetworkScanRecord *_network;
    long long _availableAuthTraits;
    WFUserSuppliedNetwork *_userSuppliedNetwork;
    NSArray *_WAPIRootCertificates;
    NSArray *_WAPIIdentities;
    WFNetworkProfile *_profile;
    unsigned long long _type;
}

@property (retain, nonatomic) NSArray *WAPIRootCertificates;
@property (retain, nonatomic) NSArray *WAPIIdentities;
@property (retain, nonatomic) NSArray *availableTLSIdentities;
@property (nonatomic) long long requestedFields;
@property (retain, nonatomic) WFNetworkProfile *profile;
@property (retain, nonatomic) WFNetworkScanRecord *network;
@property (nonatomic) unsigned long long type;
@property (nonatomic) long long availableAuthTraits;
@property (retain, nonatomic) WFUserSuppliedNetwork *userSuppliedNetwork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) UIViewController<WFNetworkView> *provider;
@property (nonatomic, readonly) _Bool needsDismissal;
@property (nonatomic, readonly, getter=isPasswordSharingSupported) _Bool passwordSharingSupported;
@property (nonatomic, readonly) NSString *username;
@property (nonatomic, readonly, getter=isEnterprise) _Bool enterprise;
@property (nonatomic, readonly, getter=isWeakSecurity) _Bool weakSecurity;
@property (nonatomic, readonly) _Bool WAPIEnabled;

- (id)initWithType:(unsigned long long)arg1;
- (long long)securityMode;
- (void)gatherCredentials:(CDUnknownBlockType)arg1;
- (void)finishWithError:(id)arg1 forNetwork:(id)arg2 profile:(id)arg3;
- (id)initWithType:(unsigned long long)arg1 authTraits:(long long)arg2;
- (_Bool)validateCredentials;
- (_Bool)validatePassword;
- (void)_updateActivityStringForError:(id)arg1 networkName:(id)arg2;
- (void)otherNetworkViewControllerUserDidTapJoin:(id)arg1;
- (void)otherNetworkViewControllerUserDidTapCancel:(id)arg1;
- (_Bool)otherNetworkViewController:(id)arg1 isValidPassword:(id)arg2;

@end
