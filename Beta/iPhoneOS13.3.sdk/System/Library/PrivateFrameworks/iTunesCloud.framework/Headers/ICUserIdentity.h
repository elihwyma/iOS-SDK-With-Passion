/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSNumber, NSString;

@interface ICUserIdentity : NSObject <Swift>

{
    NSString *_deviceIdentifier;
    _Bool _allowsDelegation;
    _Bool _allowsAccountEstablishment;
    long long _type;
    unsigned long long _creationTime;
    NSNumber *_DSID;
}

@property (nonatomic, readonly) unsigned long long creationTime;
@property (copy, nonatomic, readonly) NSString *deviceIdentifier;
@property (copy, nonatomic, readonly) NSNumber *DSID;
@property (nonatomic, readonly) _Bool allowsDelegation;
@property (nonatomic, readonly) _Bool allowsAccountEstablishment;
@property (nonatomic, readonly) long long type;

+ (_Bool)supportsSecureCoding;
+ (id)activeAccount;
+ (id)specificAccountWithDSID:(id)arg1;
+ (id)activeLockerAccount;
+ (id)nullIdentity;
+ (id)autoupdatingActiveAccount;
+ (id)autoupdatingActiveLockerAccount;
+ (id)carrierBundleWithDeviceIdentifier:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToIdentity:(id)arg1;
- (void)_resolveDSIDForEncoding;
- (void)_setResolvedDSID:(id)arg1;
- (id)identityAllowingDelegation:(_Bool)arg1;
- (id)identityAllowingEstablishment:(_Bool)arg1;

@end
