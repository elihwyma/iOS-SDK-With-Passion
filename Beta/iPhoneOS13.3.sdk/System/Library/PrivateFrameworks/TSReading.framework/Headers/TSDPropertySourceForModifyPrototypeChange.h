/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString, TSDModifyPrototypeChange;

@interface TSDPropertySourceForModifyPrototypeChange : NSObject

{
    TSDModifyPrototypeChange *mChange;
    _Bool mAfterChange;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)objectForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1;
- (_Bool)containsProperty:(int)arg1;
- (id)boxedObjectForProperty:(int)arg1;
- (int)intValueForProperty:(int)arg1;
- (double)doubleValueForProperty:(int)arg1;
- (double)CGFloatValueForProperty:(int)arg1;
- (id)initWithPrototypeChange:(id)arg1 afterChange:(_Bool)arg2;
- (id)p_propertyMap;

@end
