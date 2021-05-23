/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXData : NSObject

+ (void)readStrDataFromXmlStrDataElement:(struct _xmlNode *)arg1 data:(id)arg2 state:(id)arg3;
+ (void)readStrDataFromXmlMultiLevelStrDataElement:(struct _xmlNode *)arg1 data:(id)arg2 state:(id)arg3;
+ (void)readNumDataFromXmlNumDataElement:(struct _xmlNode *)arg1 data:(id)arg2 state:(id)arg3;
+ (id)chdDataFromXmlDataElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (_Bool)isHiddenDataElement:(struct _xmlNode *)arg1 data:(id)arg2 state:(id)arg3;

@end
