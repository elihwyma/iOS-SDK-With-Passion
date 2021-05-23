/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXTransform2D : NSObject

+ (void)readFromParentXmlNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 toDrawable:(id)arg3 drawingState:(id)arg4;
+ (struct CGRect)readChildrenBoundsFromParentXmlNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 drawingState:(id)arg3;
+ (id)readOrientedBoundsFromXmlNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 relative:(_Bool)arg3 drawingState:(id)arg4;

@end
