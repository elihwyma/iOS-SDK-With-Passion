/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXChartType : NSObject

+ (int)chdGroupingFromXmlGroupingElement:(struct _xmlNode *)arg1;
+ (id)chdChartTypeFromXmlChartTypeElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (int)chdShapeTypeFromXmlShapeTypeElement:(struct _xmlNode *)arg1;
+ (Class)chxChartTypeClassWithXmlElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)stringWithGroupingEnum:(int)arg1;
+ (void)resolveStyle:(id)arg1 state:(id)arg2;
+ (void)prepareChartTypeForWriting:(id)arg1;

@end
