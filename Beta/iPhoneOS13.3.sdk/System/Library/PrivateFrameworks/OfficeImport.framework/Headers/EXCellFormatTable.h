/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXCellFormatTable : NSObject

+ (void)setDefaultWithState:(id)arg1;
+ (void)readCellFormatsFrom:(struct _xmlNode *)arg1 isStyle:(_Bool)arg2 state:(id)arg3;
+ (void)readFromCellXfsElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readFromCellStyleXfsElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readFromCellStylesElement:(struct _xmlNode *)arg1 state:(id)arg2;

@end
