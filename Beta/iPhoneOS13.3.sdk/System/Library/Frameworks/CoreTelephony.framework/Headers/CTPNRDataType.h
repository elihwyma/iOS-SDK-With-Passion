/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CTPNRDataType : NSObject

{
    long long _pnrMechanism;
    NSString *_svcCenterAddr;
    NSString *_destAddr;
}

@property (nonatomic) long long pnrMechanism;
@property (retain, nonatomic) NSString *svcCenterAddr;
@property (retain, nonatomic) NSString *destAddr;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToCTPNRDataType:(id)arg1;

@end
