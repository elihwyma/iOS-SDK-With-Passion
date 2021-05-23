/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@interface CTSweetgumCapabilities : NSObject

{
    _Bool _supportsServices;
    _Bool _supportsUsage;
    _Bool _supportsPlans;
    _Bool _supportsApplications;
}

@property (nonatomic) _Bool supportsServices;
@property (nonatomic) _Bool supportsUsage;
@property (nonatomic) _Bool supportsPlans;
@property (nonatomic) _Bool supportsApplications;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
