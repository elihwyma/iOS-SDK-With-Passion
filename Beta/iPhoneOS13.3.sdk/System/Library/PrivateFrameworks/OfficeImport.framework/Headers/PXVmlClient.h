/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PXVmlClient : NSObject

+ (void)readClientDataFromShape:(struct _xmlNode *)arg1 toGraphic:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromGroup:(struct _xmlNode *)arg1 toGroup:(id)arg2 state:(id)arg3;
+ (int)vmlSupportLevel;
+ (id)colorWithRecolorInfoColorString:(id)arg1;

@end
