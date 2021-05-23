/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NSObject (CARenderValue)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (CDUnknownFunctionPointerType)CA_setterForProperty:(const struct _CAPropertyInfo *)arg1;
+ (CDUnknownFunctionPointerType)CA_getterForProperty:(const struct _CAPropertyInfo *)arg1;
+ (_Bool)CA_encodesPropertyConditionally:(unsigned int)arg1 type:(int)arg2;
+ (id)CA_CAMLPropertyForKey:(id)arg1;

- (double)CA_distanceToValue:(id)arg1;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (id)CAMLTypeForKey:(id)arg1;
- (struct Object *)CA_copyRenderValue;
- (void)encodeWithCAMLWriter:(id)arg1;
- (id)CA_interpolateValues:(id)arg1:(id)arg2:(id)arg3 interpolator:(const struct ValueInterpolator *)arg4;
- (id)CAMLType;
- (void)CA_prepareRenderValue;
- (unsigned long long)CA_copyNumericValue:(double [20])arg1;
- (id)CA_archivingValueForKey:(id)arg1;
- (id)CA_roundToIntegerFromValue:(id)arg1;

@end
