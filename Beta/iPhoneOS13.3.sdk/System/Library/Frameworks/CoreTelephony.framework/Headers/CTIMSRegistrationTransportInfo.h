/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@interface CTIMSRegistrationTransportInfo : NSObject

{
    _Bool _isRegistered;
    int _contextType;
    int _transportType;
}

@property (nonatomic) _Bool isRegistered;
@property (nonatomic) int contextType;
@property (nonatomic) int transportType;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
