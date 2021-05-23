/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXDateAxis : NSObject

+ (id)chdAxisFromXmlAxisElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (int)chdTimeUnitFromXmlTimeUnitElement:(struct _xmlNode *)arg1;
+ (id)stringFromTimeUnit:(int)arg1;

@end
