/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXFont : NSObject

+ (id)edRunCollectionFromXmlTextPropertiesElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)edFontWithOadTextBody:(id)arg1 state:(id)arg2;
+ (id)defaultEdRunCollectionForTitle:(id)arg1 titleElement:(struct _xmlNode *)arg2 state:(id)arg3;
+ (id)readParagraphPropertiesFromXmlTextPropertiesParentElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)defaultEdRunCollectionWithState:(id)arg1;
+ (id)edFontWithOadCharacterProperties:(id)arg1 state:(id)arg2;
+ (id)edFontWithFullOadCharacterProperties:(id)arg1 state:(id)arg2;
+ (void)mapFontProperties:(id)arg1 to:(id)arg2;
+ (id)edFontFromXmlTextPropertiesElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)mapFontProperties:(id)arg1 toTextProps:(id)arg2 withEffects:(id)arg3;

@end
