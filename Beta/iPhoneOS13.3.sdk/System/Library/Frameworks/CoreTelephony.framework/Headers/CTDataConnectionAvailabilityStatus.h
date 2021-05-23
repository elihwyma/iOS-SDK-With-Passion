/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@interface CTDataConnectionAvailabilityStatus : NSObject

{
    _Bool _available;
    int _csiError;
}

@property (nonatomic) _Bool available;
@property (nonatomic) int csiError;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
