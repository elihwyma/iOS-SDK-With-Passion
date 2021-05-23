/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ODXData : NSObject

+ (void)readNode:(struct _xmlNode *)arg1 toDiagram:(id)arg2 state:(id)arg3;
+ (id)readPointListFromNode:(struct _xmlNode *)arg1 pointIdMap:(id)arg2 state:(id)arg3;
+ (void)readConnectionListFromNode:(struct _xmlNode *)arg1 pointIdMap:(id)arg2 state:(id)arg3;
+ (void)associatePresentationsInIdMap:(id)arg1;
+ (id)readModelIdentifierFromNode:(struct _xmlNode *)arg1 attributeName:(const char *)arg2;
+ (id)readPointFromNode:(struct _xmlNode *)arg1 pointIdMap:(id)arg2 state:(id)arg3;
+ (int)readPointTypeFromNode:(struct _xmlNode *)arg1;
+ (void)readConnectionFromNode:(struct _xmlNode *)arg1 pointIdMap:(id)arg2 state:(id)arg3;
+ (int)readConnectionTypeFromNode:(struct _xmlNode *)arg1;

@end
