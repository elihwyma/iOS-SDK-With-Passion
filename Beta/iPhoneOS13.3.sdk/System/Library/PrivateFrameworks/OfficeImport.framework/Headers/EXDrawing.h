/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXDrawing : NSObject

+ (void)initialize;
+ (id)readTwoCellAnchorNode:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)readOneCellAnchorNode:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)readAbsoluteAnchorNode:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)readAnchorNode:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readFromPart:(id)arg1 state:(id)arg2;
+ (struct EDCellAnchorMarker)readAnchorMarkerFromNode:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)readDrawableNode:(struct _xmlNode *)arg1 anchor:(id)arg2 state:(id)arg3;

@end
