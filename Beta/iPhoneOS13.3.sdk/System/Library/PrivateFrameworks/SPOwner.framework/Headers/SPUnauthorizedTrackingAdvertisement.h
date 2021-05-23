/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate;

@interface SPUnauthorizedTrackingAdvertisement : NSObject

{
    unsigned char _status;
    NSData *_advertisementData;
    NSData *_reserved;
    long long _rssi;
    NSDate *_scanDate;
    NSData *_data;
    NSData *__address;
}

@property (copy, nonatomic) NSData *_address;
@property (nonatomic) long long rssi;
@property (copy, nonatomic) NSData *advertisementData;
@property (nonatomic) unsigned char status;
@property (copy, nonatomic) NSData *reserved;
@property (copy, nonatomic) NSDate *scanDate;
@property (copy, nonatomic, readonly) NSData *address;
@property (copy, nonatomic) NSData *data;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAddress:(id)arg1 advertisementData:(id)arg2 status:(unsigned char)arg3 reserved:(id)arg4 rssi:(long long)arg5 scanDate:(id)arg6;
- (id)initWithAddress:(id)arg1 advertisementData:(id)arg2 rssi:(long long)arg3 scanDate:(id)arg4;

@end
