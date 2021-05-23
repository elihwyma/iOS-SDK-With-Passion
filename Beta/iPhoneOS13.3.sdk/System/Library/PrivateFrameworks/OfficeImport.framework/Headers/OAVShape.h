/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAVShape : NSObject

+ (id)readFromShape:(struct _xmlNode *)arg1 inNamespace:(id)arg2 state:(id)arg3;
+ (unsigned short)typeWithShape:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)managerWithShape:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readBoundsAndGeometryOfPolylineFromManager:(id)arg1 toShape:(id)arg2 state:(id)arg3;

@end
