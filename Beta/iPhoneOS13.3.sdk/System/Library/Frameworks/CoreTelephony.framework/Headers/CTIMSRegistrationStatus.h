/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@interface CTIMSRegistrationStatus : NSObject

{
    _Bool _isRegisteredForVoice;
    _Bool _isRegisteredForSMS;
}

@property (nonatomic) _Bool isRegisteredForVoice;
@property (nonatomic) _Bool isRegisteredForSMS;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
