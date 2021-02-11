/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMAmbientPressureData : CMLogItem <SRSampleDirectExporting> {
    id  _internal;
}

@property (nonatomic, readonly) struct { double x1; double x2; } ambientPressure;

+ (bool)supportsSecureCoding;

- (struct { double x1; double x2; })ambientPressure;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPressure:(struct { float x1; float x2; })arg1 andTimestamp:(double)arg2;
- (bool)sr_prefersUTF8StringRepresentation;
- (long long)sr_writeUTF8RepresentationToOutputStream:(id)arg1;

@end