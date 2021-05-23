/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXAxis : NSObject

+ (Class)chxAxisClassWithXmlAxisElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)chdAxisFromXmlAxisElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readScalingFromXmlScalingElement:(struct _xmlNode *)arg1 axis:(id)arg2 state:(id)arg3;
+ (int)chdAxisPositionFromXmlAxisElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (int)chdTickMarkFromXmlTickMarkElement:(struct _xmlNode *)arg1;
+ (int)chdTickLabelPositionFromXmlTickLabelPositionElement:(struct _xmlNode *)arg1;
+ (int)chdCrossesFromXmlAxisElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (Class)chxAxisClassWithChdAxis:(id)arg1;

@end
