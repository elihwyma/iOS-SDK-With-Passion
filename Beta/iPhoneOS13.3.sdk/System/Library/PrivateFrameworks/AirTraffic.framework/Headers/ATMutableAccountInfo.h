/*
 Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <AirTraffic/ATAccountInfo.h>

@class NSNumber, NSString;

@interface ATMutableAccountInfo : ATAccountInfo

@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSNumber *DSID;

@end
