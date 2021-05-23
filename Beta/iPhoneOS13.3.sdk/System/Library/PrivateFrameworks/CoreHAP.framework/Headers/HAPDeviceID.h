/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface HAPDeviceID : NSObject

{
    NSData *_data;
}

@property (copy, nonatomic, readonly) NSData *data;
@property (copy, nonatomic, readonly) NSString *deviceIDString;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceIDData:(id)arg1;
- (_Bool)isEqualToDeviceID:(id)arg1;
- (id)initWithDeviceIDString:(id)arg1;

@end
