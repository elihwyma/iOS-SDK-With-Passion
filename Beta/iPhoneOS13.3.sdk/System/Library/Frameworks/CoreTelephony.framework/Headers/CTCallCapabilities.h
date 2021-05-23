/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@interface CTCallCapabilities : NSObject

{
    _Bool _isWifiCallingAvailable;
    _Bool _isVoLTECallingAvailable;
    _Bool _isCSCallingAvailable;
    _Bool _isEmergencyCallingOnWifiAllowed;
    _Bool _isEmergencyCallingOnWifiAvailable;
    _Bool _isCarrierSupportsEmergencyCallOnWifiNoLimit;
}

@property (nonatomic) _Bool isWifiCallingAvailable;
@property (nonatomic) _Bool isVoLTECallingAvailable;
@property (nonatomic) _Bool isCSCallingAvailable;
@property (nonatomic) _Bool isEmergencyCallingOnWifiAllowed;
@property (nonatomic) _Bool isEmergencyCallingOnWifiAvailable;
@property (nonatomic) _Bool isCarrierSupportsEmergencyCallOnWifiNoLimit;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
