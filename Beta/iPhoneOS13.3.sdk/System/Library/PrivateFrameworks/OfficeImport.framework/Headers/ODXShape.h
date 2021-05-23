/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ODXShape : NSObject

+ (void)readNode:(struct _xmlNode *)arg1 toShape:(id)arg2 state:(id)arg3;
+ (void)readTypeFromNode:(struct _xmlNode *)arg1 toShape:(id)arg2;
+ (void)readAdjustmentListNode:(struct _xmlNode *)arg1 toShape:(id)arg2 state:(id)arg3;

@end
