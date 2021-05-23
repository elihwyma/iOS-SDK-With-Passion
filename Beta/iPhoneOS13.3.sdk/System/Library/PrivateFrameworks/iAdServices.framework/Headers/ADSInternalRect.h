/*
 Image: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
 */

#import <Foundation/NSObject.h>

@class ADSInternalPoint, ADSInternalSize;

@interface ADSInternalRect : NSObject

{
    ADSInternalPoint *_origin;
    ADSInternalSize *_size;
}

@property (copy, nonatomic) ADSInternalPoint *origin;
@property (copy, nonatomic) ADSInternalSize *size;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithX:(float)arg1 Y:(float)arg2 width:(float)arg3 height:(float)arg4;

@end
