/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBGraphic : NSObject

+ (id)readGraphicWithDictionary:(id)arg1 state:(id)arg2;
+ (void)readNotesWithDictionary:(id)arg1 state:(id)arg2;
+ (void)readChart:(id)arg1 chartIndex:(short)arg2 state:(id)arg3;
+ (void)readGraphicsInChart:(id)arg1 state:(id)arg2;
+ (id)readMainChartWithState:(id)arg1;
+ (void)readOle:(id)arg1 xlGraphicsInfo:(struct XlGraphicsInfo *)arg2 state:(id)arg3;
+ (void)readImage:(id)arg1 xlGraphicsInfo:(struct XlGraphicsInfo *)arg2 state:(id)arg3;
+ (int)objectTypeForShape:(id)arg1;
+ (void)readGraphicsWithState:(id)arg1;

@end
