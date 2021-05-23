/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CTRegistrationDisplayStatus : NSObject

{
    _Bool _isInHomeCountry;
    _Bool _changedDueToSimRemoval;
    _Bool _isRegistrationForcedHome;
    NSString *_registrationDisplayStatus;
}

@property (retain, nonatomic) NSString *registrationDisplayStatus;
@property (nonatomic) _Bool isInHomeCountry;
@property (nonatomic) _Bool changedDueToSimRemoval;
@property (nonatomic) _Bool isRegistrationForcedHome;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
