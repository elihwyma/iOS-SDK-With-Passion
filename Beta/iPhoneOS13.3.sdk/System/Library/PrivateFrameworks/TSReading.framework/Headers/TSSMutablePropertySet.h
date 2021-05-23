/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSSPropertySet.h>

@interface TSSMutablePropertySet : TSSPropertySet

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addProperties:(id)arg1;
- (void)removeProperty:(int)arg1;
- (void)addProperty:(int)arg1;
- (void)removeProperties:(id)arg1;
- (id)initWithFirstProperty:(int)arg1 argumentList:(char *)arg2;
- (id)initWithPropertySet:(id)arg1;
- (void)intersectPropertySet:(id)arg1;

@end
