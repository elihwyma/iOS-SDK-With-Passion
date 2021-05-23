/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <CoreMotion/CMLogItem.h>

@interface CMAmbientPressureData : CMLogItem

{
    id _internal;
}

@property (nonatomic, readonly) CDStruct_c3b9c2ee ambientPressure;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPressure:(CDStruct_ebf20f05)arg1 andTimestamp:(double)arg2;
- (long long)sr_writeUTF8RepresentationToOutputStream:(id)arg1;
- (_Bool)sr_prefersUTF8StringRepresentation;

@end
