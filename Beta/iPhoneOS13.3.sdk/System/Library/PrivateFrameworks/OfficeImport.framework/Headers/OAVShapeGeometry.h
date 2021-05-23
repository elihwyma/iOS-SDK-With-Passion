/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAVShapeGeometry : NSObject

+ (id)readFromManager:(id)arg1;
+ (struct OADAdjustCoord)readAdjustCoord:(id)arg1;
+ (void)readAdjustValuesFromManager:(id)arg1 toGeometry:(id)arg2;
+ (void)readLimoFromManager:(id)arg1 toGeometry:(id)arg2;
+ (void)readTextBodyRectsFromManager:(id)arg1 toGeometry:(id)arg2;

@end
