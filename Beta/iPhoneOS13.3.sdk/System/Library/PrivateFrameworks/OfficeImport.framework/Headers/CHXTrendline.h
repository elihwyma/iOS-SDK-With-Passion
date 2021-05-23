/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXTrendline : NSObject

+ (id)chdTrendlineFromXmlTrendlineElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (int)chdTrendlineTypeFromXmlTrendlineTypeElement:(struct _xmlNode *)arg1;
+ (id)stringFromTrendlineTypeEnum:(int)arg1;

@end
