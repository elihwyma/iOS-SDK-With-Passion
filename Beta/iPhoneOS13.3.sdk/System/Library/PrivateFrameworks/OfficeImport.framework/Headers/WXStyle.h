/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WXStyle : NSObject

+ (id)styleTypeEnumMap;
+ (id)tableStyleOverrideTypeEnumMap;
+ (void)readFrom:(struct _xmlNode *)arg1 to:(id)arg2 defaults:(struct _xmlNode *)arg3 state:(id)arg4;

@end
