/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXDataLabel : NSObject

+ (id)chdDataLabelFromXmlDataLabelElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (Class)chdDataValuePropertiesClassWithState:(id)arg1;
+ (int)chdDataLabelPositionFromXmlDataLabelElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)stringFromDataLabelPosition:(int)arg1;
+ (void)readFrom:(struct _xmlNode *)arg1 dataValuePropertiesCollection:(id)arg2 state:(id)arg3;

@end
