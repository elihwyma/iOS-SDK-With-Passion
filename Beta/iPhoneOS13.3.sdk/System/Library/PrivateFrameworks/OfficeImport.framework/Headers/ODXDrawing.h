/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ODXDrawing : NSObject

+ (id)readDrawingRelationshipIdFromDataNode:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readNode:(struct _xmlNode *)arg1 toDiagram:(id)arg2 state:(id)arg3;

@end
