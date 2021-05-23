/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXGroup : NSObject

+ (id)readFromXmlNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 drawingState:(id)arg3;
+ (void)readPropertiesFromXmlNode:(struct _xmlNode *)arg1 properties:(id)arg2 drawingState:(id)arg3;
+ (void)applyGroupFill:(id)arg1 toChildrenOfGroup:(id)arg2;

@end
