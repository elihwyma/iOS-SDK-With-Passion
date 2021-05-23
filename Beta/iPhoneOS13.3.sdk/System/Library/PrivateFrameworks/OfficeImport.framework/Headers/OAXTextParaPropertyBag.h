/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXTextParaPropertyBag : NSObject

+ (void)readParagraphProperties:(struct _xmlNode *)arg1 paragraphProperties:(id)arg2 drawingState:(id)arg3;
+ (void)readAlign:(id)arg1 paragraphProperties:(id)arg2;
+ (void)readFontAlign:(id)arg1 paragraphProperties:(id)arg2;
+ (id)readSpacing:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (void)readTabList:(struct _xmlNode *)arg1 paragraphProperties:(id)arg2 drawingState:(id)arg3;
+ (int)readBulletScheme:(id)arg1;

@end
