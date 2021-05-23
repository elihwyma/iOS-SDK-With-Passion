/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSSet, NSString, NSUUID, SPBeaconRole, SPHandle, SPLostModeInfo;

@interface SPBeacon : NSObject

{
    _Bool _accepted;
    NSUUID *_identifier;
    SPHandle *_owner;
    NSString *_name;
    NSString *_model;
    SPBeaconRole *_role;
    SPLostModeInfo *_lostModeInfo;
    NSSet *_shares;
    NSDictionary *_taskInformation;
    NSString *_systemVersion;
    long long _vendorId;
    long long _productId;
    NSString *_stableIdentifier;
    NSDate *_pairingDate;
    NSString *_correlationIdentifier;
}

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *stableIdentifier;
@property (copy, nonatomic) SPHandle *owner;
@property (nonatomic) _Bool accepted;
@property (copy, nonatomic) NSDate *pairingDate;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) SPBeaconRole *role;
@property (copy, nonatomic) SPLostModeInfo *lostModeInfo;
@property (copy, nonatomic) NSSet *shares;
@property (copy, nonatomic) NSDictionary *taskInformation;
@property (copy, nonatomic) NSString *correlationIdentifier;
@property (copy, nonatomic) NSString *systemVersion;
@property (nonatomic) long long vendorId;
@property (nonatomic) long long productId;

+ (_Bool)supportsSecureCoding;
+ (id)SPOwner;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
