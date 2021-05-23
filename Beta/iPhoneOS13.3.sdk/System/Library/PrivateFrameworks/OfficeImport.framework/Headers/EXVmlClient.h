/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXVmlClient : NSObject

+ (void)readClientDataFromShape:(struct _xmlNode *)arg1 toGraphic:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromGroup:(struct _xmlNode *)arg1 toGroup:(id)arg2 state:(id)arg3;
+ (int)vmlSupportLevel;
+ (void)readAnchor:(struct _xmlNode *)arg1 to:(id)arg2;
+ (id)readComment:(struct _xmlNode *)arg1 to:(id)arg2 state:(id)arg3;
+ (id)edTextBoxForVmlTextInShape:(struct _xmlNode *)arg1 to:(id)arg2 state:(id)arg3;

@end
