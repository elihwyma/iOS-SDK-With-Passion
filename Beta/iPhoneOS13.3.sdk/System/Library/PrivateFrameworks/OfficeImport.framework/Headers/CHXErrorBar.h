/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXErrorBar : NSObject

+ (int)chdErrorBarTypeFromXmlElement:(struct _xmlNode *)arg1;
+ (int)chdErrorBarValueTypeFromXmlElement:(struct _xmlNode *)arg1;
+ (int)chdErrorBarDirectionFromXmlElement:(struct _xmlNode *)arg1;
+ (id)chxErrorBarTypeFromEnum:(int)arg1;
+ (id)chxErrorBarValueTypeFromEnum:(int)arg1;
+ (id)chdErrorBarFromXmlErrorBarElement:(struct _xmlNode *)arg1 state:(id)arg2;

@end
