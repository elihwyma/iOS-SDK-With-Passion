/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@interface CAMediaTimingFunction : NSObject

{
    struct CAMediaTimingFunctionPrivate *_priv;
}

+ (_Bool)supportsSecureCoding;
+ (id)functionWithName:(id)arg1;
+ (id)functionWithControlPoints:(float)arg1:(float)arg2:(float)arg3:(float)arg4;
+ (void)CAMLParserEndElement:(id)arg1 content:(id)arg2;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)getControlPointAtIndex:(unsigned long long)arg1 values:(float [2])arg2;
- (float)_solveForInput:(float)arg1;
- (id)initWithControlPoints:(float)arg1:(float)arg2:(float)arg3:(float)arg4;
- (struct Object *)CA_copyRenderValue;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)_getPoints:(double *)arg1;
- (id)CAMLType;
- (unsigned long long)CA_copyNumericValue:(double [20])arg1;

@end
