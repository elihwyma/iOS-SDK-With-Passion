/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBReference : NSObject

+ (id)edReferenceFromXlRef:(const struct XlRef *)arg1;
+ (struct XlRef *)xlRefFromEDReference:(id)arg1;

@end
