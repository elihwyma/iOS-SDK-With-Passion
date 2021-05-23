/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAVTextBodyProperties : NSObject

+ (void)readFromManager:(id)arg1 toShape:(id)arg2 state:(id)arg3;
+ (int)readRotation:(id)arg1;
+ (unsigned char)flowTypeWithLayoutFlowString:(id)arg1 altLayoutFlowString:(id)arg2;
+ (int)readWrapStyle:(id)arg1;
+ (int)readAnchor:(id)arg1;

@end
