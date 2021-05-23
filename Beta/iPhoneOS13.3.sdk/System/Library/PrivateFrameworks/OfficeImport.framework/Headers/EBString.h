/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBString : NSObject

+ (id)edStringFromXlString:(const struct XlString *)arg1 edResources:(id)arg2;
+ (struct XlString *)xlStringFromEDString:(id)arg1 state:(id)arg2;
+ (struct XlString *)xlStringWithIndex:(unsigned int)arg1;

@end
