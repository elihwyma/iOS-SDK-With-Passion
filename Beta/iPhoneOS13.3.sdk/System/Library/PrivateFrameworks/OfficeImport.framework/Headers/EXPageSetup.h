/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXPageSetup : NSObject

+ (int)edPageOrientationFromPageOrientationString:(id)arg1;
+ (int)edPageOrderFromPageOrderString:(id)arg1;
+ (id)pageOrderEnumMap;
+ (id)pageOrientationEnumMap;
+ (id)edPageSetupFrom:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)edPageMarginsFrom:(struct _xmlNode *)arg1 state:(id)arg2;

@end
