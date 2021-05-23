/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXLegend : NSObject

+ (id)chdLegendFromXmlLegendElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (int)chdLegendPositionFromXmlLegendPositionElement:(struct _xmlNode *)arg1;
+ (id)chdLegendEntryFromXmlLegendEntryElement:(struct _xmlNode *)arg1 defaultFont:(id)arg2 state:(id)arg3;
+ (void)setDefaultLegendBounds:(id)arg1 legendPosition:(int)arg2;

@end
