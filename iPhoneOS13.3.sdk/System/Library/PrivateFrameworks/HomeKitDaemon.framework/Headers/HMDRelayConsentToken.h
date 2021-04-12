//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>


@class HMDHAPAccessory, HMDUser, NSData, NSDate, NSUUID;

@interface HMDRelayConsentToken : HMFObject <NSSecureCoding>
{
    NSUUID *_accessoryIdentifier;
    NSUUID *_userIdentifier;
    NSUUID *_identifier;
    HMDHAPAccessory *_accessory;
    HMDUser *_user;
    NSData *_consentToken;
    NSDate *_expirationDate;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) NSData *consentToken; // @synthesize consentToken=_consentToken;
@property(nonatomic) __weak HMDUser *user; // @synthesize user=_user;
@property(nonatomic) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSUUID *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)configureWithHome:(id)arg1;
@property(readonly, nonatomic) NSUUID *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithConsentToken:(id)arg1 expiration:(id)arg2 accessory:(id)arg3 user:(id)arg4;
- (id)init;

@end

