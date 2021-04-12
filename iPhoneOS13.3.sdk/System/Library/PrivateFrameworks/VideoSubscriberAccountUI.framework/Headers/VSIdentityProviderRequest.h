//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, VSAccount, VSOptional, VSPersistentStorage;

@interface VSIdentityProviderRequest : NSObject
{
    long long _type;
    NSString *_requestingAppDisplayName;
    NSString *_requestingAppAdamID;
    VSAccount *_account;
    VSPersistentStorage *_storage;
    VSOptional *_accountMetadataRequest;
    NSString *_accountProviderAuthenticationToken;
}

+ (id)STBOptOutRequestWithStorage:(id)arg1;
+ (id)deleteAccountRequestWithAccount:(id)arg1 storage:(id)arg2;
+ (id)accountMetadataRequestWithAccount:(id)arg1 storage:(id)arg2 accountMetadataRequest:(id)arg3 requestingAppDisplayName:(id)arg4 requestingAppAdamID:(id)arg5 accountProviderAuthenticationToken:(id)arg6;
+ (id)silentMakeAccountRequestWithStorage:(id)arg1;
+ (id)makeAccountRequestWithStorage:(id)arg1;
@property(copy, nonatomic) NSString *accountProviderAuthenticationToken; // @synthesize accountProviderAuthenticationToken=_accountProviderAuthenticationToken;
@property(retain, nonatomic) VSOptional *accountMetadataRequest; // @synthesize accountMetadataRequest=_accountMetadataRequest;
@property(retain, nonatomic) VSPersistentStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) VSAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *requestingAppAdamID; // @synthesize requestingAppAdamID=_requestingAppAdamID;
@property(copy, nonatomic) NSString *requestingAppDisplayName; // @synthesize requestingAppDisplayName=_requestingAppDisplayName;
@property(nonatomic) long long type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) BOOL forceAuthentication;
- (id)_initWithRequestType:(long long)arg1 account:(id)arg2 storage:(id)arg3;
@property(readonly, nonatomic) BOOL requiresUI;
@property(readonly, nonatomic) BOOL allowsUI;
- (id)init;

@end

