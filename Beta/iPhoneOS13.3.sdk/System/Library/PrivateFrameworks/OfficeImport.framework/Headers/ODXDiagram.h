/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ODXDiagram : NSObject

+ (id)readFromParentNode:(struct _xmlNode *)arg1 state:(id)arg2;
+ (struct _xmlNode *)nodeForRelationshipName:(const char *)arg1 relIdsNode:(struct _xmlNode *)arg2 part:(id)arg3 state:(id)arg4;
+ (struct _xmlNode *)nodeForRelationship:(id)arg1 part:(id)arg2 state:(id)arg3;

@end
