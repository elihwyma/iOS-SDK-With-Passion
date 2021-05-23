/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXStyleMatrix : NSObject

+ (void)readFromNode:(struct _xmlNode *)arg1 toStyleMatrix:(id)arg2 packagePart:(id)arg3 drawingState:(id)arg4;
+ (id)readReferenceFromNode:(struct _xmlNode *)arg1;
+ (_Bool)readReferenceFromParentNode:(struct _xmlNode *)arg1 name:(const char *)arg2 inNamespace:(id)arg3 color:(id *)arg4 index:(unsigned int *)arg5;

@end
