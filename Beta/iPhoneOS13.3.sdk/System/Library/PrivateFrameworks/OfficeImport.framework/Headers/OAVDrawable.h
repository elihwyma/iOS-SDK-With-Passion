/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAVDrawable : NSObject

+ (id)readDrawableFromNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 state:(id)arg3;
+ (struct _xmlDoc *)vmlDocumentFromPart:(id)arg1;
+ (id)readDrawablesFromParent:(struct _xmlNode *)arg1 inNamespace:(id)arg2 state:(id)arg3;
+ (void)readFromDrawable:(struct _xmlNode *)arg1 toDrawable:(id)arg2 state:(id)arg3;
+ (struct CGRect)readCoordBounds:(struct _xmlNode *)arg1;

@end
