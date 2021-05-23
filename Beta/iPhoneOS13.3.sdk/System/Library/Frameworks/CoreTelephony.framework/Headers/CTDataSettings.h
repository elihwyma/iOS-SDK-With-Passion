/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@interface CTDataSettings : NSObject

{
    _Bool _cellularDataEnabled;
    _Bool _airplaneModeEnabled;
    _Bool _cellularDataCapable;
}

@property (nonatomic, getter=isCellularDataEnabled) _Bool cellularDataEnabled;
@property (nonatomic, getter=isAirplaneModeEnabled) _Bool airplaneModeEnabled;
@property (nonatomic, getter=isCellularDataCapable) _Bool cellularDataCapable;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
