/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OABColor : NSObject

+ (int)readSystemColorID:(int)arg1;
+ (struct EshColor)propertyColor:(int)arg1 colorPropertiesManager:(id)arg2;
+ (id)readColor:(const struct EshColor *)arg1 colorPropertiesManager:(id)arg2 state:(id)arg3;
+ (int)readColorAdjustmentType:(int)arg1;
+ (int)writeSystemColorID:(int)arg1;

@end
