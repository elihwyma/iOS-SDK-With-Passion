/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXReader : NSObject

+ (id)readFromParentNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)chartPartWithParentNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)externalDataRelationshipWithChartPart:(id)arg1 drawingState:(id)arg2;
+ (id)externalDataWithChartPart:(id)arg1 relationship:(id)arg2;
+ (id)readFromXmlDocument:(struct _xmlDoc *)arg1 chartStyleId:(int)arg2 drawingState:(id)arg3;

@end
