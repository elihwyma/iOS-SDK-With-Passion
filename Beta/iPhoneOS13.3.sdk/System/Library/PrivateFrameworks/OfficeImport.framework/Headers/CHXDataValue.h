/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXDataValue : NSObject

+ (id)chdNumberValueFromXmlDataValueElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)chdStringValueFromXmlDataValueElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)chdDataValueFromXmlDataValueElement:(struct _xmlNode *)arg1 state:(id)arg2;

@end
