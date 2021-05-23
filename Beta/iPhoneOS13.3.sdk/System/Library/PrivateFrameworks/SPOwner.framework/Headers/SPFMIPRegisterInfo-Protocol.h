/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <SPOwner/Swift-Protocol.h>

@class NSDate, NSNumber, NSSet, NSString, NSUUID;

@protocol SPFMIPRegisterInfo <Swift>

@property (copy, nonatomic, readonly) NSUUID *baUUID;
@property (copy, nonatomic, readonly) NSString *serviceState;
@property (copy, nonatomic, readonly) NSSet *serviceDisabledReasons;
@property (copy, nonatomic, readonly) NSDate *beaconZoneCreationDate;
@property (copy, nonatomic, readonly) NSNumber *beaconZoneCreationErrorCode;
@property (copy, nonatomic, readonly) NSDate *lastKeyRollDate;

@end
