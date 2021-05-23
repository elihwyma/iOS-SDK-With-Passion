/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@interface CTEmergencyMode : NSObject

{
    _Bool _enabled;
    _Bool _isEmergencyText;
    long long _type;
}

@property (nonatomic) _Bool enabled;
@property (nonatomic) long long type;
@property (nonatomic) _Bool isEmergencyText;

+ (_Bool)supportsSecureCoding;
+ (id)convertFromEmergencyMode:(const struct EmergencyMode *)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnabled:(_Bool)arg1 type:(long long)arg2 isEmergencyText:(_Bool)arg3;
- (_Bool)isEqualToCTEmergencyMode:(id)arg1;
- (id)initWithEnabled:(_Bool)arg1 type:(long long)arg2;

@end
