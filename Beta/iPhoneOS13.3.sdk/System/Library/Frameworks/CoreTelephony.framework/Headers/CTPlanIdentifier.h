/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CTPlanIdentifier : NSObject

{
    NSString *_iccid;
    NSString *_carrierName;
    NSString *_phoneNumber;
    NSString *_countryCode;
    NSString *_label;
}

@property (retain, nonatomic) NSString *iccid;
@property (retain, nonatomic) NSString *carrierName;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSString *label;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIccid:(id)arg1 carrierName:(id)arg2 phoneNumber:(id)arg3 countryCode:(id)arg4 label:(id)arg5;

@end
