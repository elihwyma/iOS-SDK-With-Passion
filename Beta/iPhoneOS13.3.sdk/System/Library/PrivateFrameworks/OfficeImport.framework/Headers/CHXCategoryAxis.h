/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXCategoryAxis : NSObject

+ (id)chdAxisFromXmlAxisElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (int)chdLabelAlignFromXmlLabelAlignElement:(struct _xmlNode *)arg1;
+ (id)stringFromLabelAlignment:(int)arg1;

@end
