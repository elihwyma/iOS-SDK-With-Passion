/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <Foundation/NSObject.h>

@class NSData, NSDateInterval, NSString, SPBeaconingKey;

@interface SPCommandKeys : NSObject

{
    SPBeaconingKey *_beaconingKey;
    NSData *_commandKey;
    NSData *_connectionToken;
    NSData *_nearbyToken;
}

@property (copy, nonatomic) SPBeaconingKey *beaconingKey;
@property (copy, nonatomic) NSData *commandKey;
@property (copy, nonatomic) NSData *connectionToken;
@property (copy, nonatomic) NSData *nearbyToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSData *address;
@property (copy, nonatomic, readonly) NSDateInterval *dateInterval;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBeaconingKey:(id)arg1 commandKey:(id)arg2 connectionToken:(id)arg3 nearbyToken:(id)arg4;

@end
