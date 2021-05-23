/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXBorders : NSObject

+ (id)edBorderFromXmlElement:(struct _xmlNode *)arg1 diagonalType:(int)arg2 state:(id)arg3;
+ (int)edDiagStyleFromXmlElement:(struct _xmlNode *)arg1;
+ (id)borderStyleEnumMap;
+ (id)edBordersFromXmlBordersElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (int)edBorderStyleFromXmlBorderStyleString:(id)arg1;

@end
