/*
 Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface ATAccountInfo : NSObject

{
    NSString *_altDSID;
    NSString *_appleID;
    NSNumber *_DSID;
}

@property (nonatomic, readonly) NSString *appleID;
@property (nonatomic, readonly) NSString *altDSID;
@property (nonatomic, readonly) NSNumber *DSID;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
