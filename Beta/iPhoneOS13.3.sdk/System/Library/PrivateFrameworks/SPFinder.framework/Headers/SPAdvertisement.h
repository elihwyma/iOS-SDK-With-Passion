/*
 Image: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate;

@interface SPAdvertisement : NSObject

{
    unsigned char _status;
    NSData *_address;
    NSData *_advertisementData;
    NSData *_reserved;
    long long _rssi;
    NSDate *_scanDate;
}

@property (copy, nonatomic) NSData *address;
@property (nonatomic) long long rssi;
@property (copy, nonatomic) NSData *advertisementData;
@property (nonatomic) unsigned char status;
@property (copy, nonatomic) NSData *reserved;
@property (copy, nonatomic) NSDate *scanDate;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAddress:(id)arg1 advertisementData:(id)arg2 status:(unsigned char)arg3 reserved:(id)arg4 rssi:(long long)arg5 scanDate:(id)arg6;
- (id)initWithAddress:(id)arg1 advertisementData:(id)arg2 rssi:(long long)arg3 scanDate:(id)arg4;

@end
