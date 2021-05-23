/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXUserShapes : NSObject

+ (void)readFromCharSpaceNode:(struct _xmlNode *)arg1 state:(id)arg2;
+ (float)readRealCoordinate:(struct _xmlNode *)arg1;
+ (struct CGPoint)readRealPoint:(struct _xmlNode *)arg1;
+ (id)readDrawable:(struct _xmlNode *)arg1 anchor:(id)arg2 drawingState:(id)arg3;
+ (id)readRelativeSizeAnchor:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readAbsoluteSizeAnchor:(struct _xmlNode *)arg1 drawingState:(id)arg2;

@end
