/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WXTableCellProperties : NSObject

+ (id)verticalAlignmentEnumMap;
+ (void)readFrom:(struct _xmlNode *)arg1 to:(id)arg2 state:(id)arg3;
+ (unsigned long long)bitfieldForCnfStyleFrom:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)writeForDocument:(id)arg1 state:(id)arg2;
+ (void)writeForStyle:(id)arg1 state:(id)arg2;

@end
