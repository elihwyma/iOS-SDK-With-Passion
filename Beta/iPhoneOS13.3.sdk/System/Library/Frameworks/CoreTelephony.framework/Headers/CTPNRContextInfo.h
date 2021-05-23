/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CTPNRContextInfo : NSObject

{
    _Bool _isReady;
    NSString *_plmn;
    NSString *_imsi;
    NSString *_phoneNumber;
    NSString *_phoneNumberOnSIM;
}

@property (nonatomic) _Bool isReady;
@property (retain, nonatomic) NSString *plmn;
@property (retain, nonatomic) NSString *imsi;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSString *phoneNumberOnSIM;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToPNRContextInfo:(id)arg1;

@end
