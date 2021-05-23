/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXValueAxis : NSObject

+ (id)chdAxisFromXmlAxisElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (int)chdAxisBuiltInUnitFromXmlBuildInUnitElement:(struct _xmlNode *)arg1;
+ (id)stringBuiltInUnitEnum:(int)arg1;

@end
