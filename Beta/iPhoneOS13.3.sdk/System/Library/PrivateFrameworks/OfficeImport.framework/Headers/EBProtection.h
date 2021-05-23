/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBProtection : NSObject

+ (id)edProtectionFromXlXf:(struct XlXf *)arg1;
+ (id)edProtectionFromXlDXfProtect:(struct XlDXfProtect *)arg1;
+ (id)edProtectionFromXlGraphicsInfo:(struct XlGraphicsInfo *)arg1;
+ (void)writeProtection:(id)arg1 toXlXf:(struct XlXf *)arg2;
+ (void)writeProtection:(id)arg1 toXlGraphicsInfo:(struct XlGraphicsInfo *)arg2;
+ (struct XlDXfProtect *)xlDXfProtectFromEDProtection:(id)arg1;

@end
