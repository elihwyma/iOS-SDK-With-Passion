/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXConnector : NSObject

+ (void)readConnectionFromParent:(struct _xmlNode *)arg1 nodeName:(const char *)arg2 connection:(id)arg3 drawingState:(id)arg4;
+ (void)readNonVisualConnectorProperties:(struct _xmlNode *)arg1 inNamespace:(id)arg2 connectorProperties:(id)arg3 drawingState:(id)arg4;
+ (id)readFromXmlNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 drawingState:(id)arg3;

@end
