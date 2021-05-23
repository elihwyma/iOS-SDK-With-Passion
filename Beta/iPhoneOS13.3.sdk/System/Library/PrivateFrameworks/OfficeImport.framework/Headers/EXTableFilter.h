/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXTableFilter : NSObject

+ (int)edFilterOperatorFromXmlOperatorString:(id)arg1;
+ (id)edTableFilterFromXmlTableFilterElement:(struct _xmlNode *)arg1 state:(id)arg2;

@end
