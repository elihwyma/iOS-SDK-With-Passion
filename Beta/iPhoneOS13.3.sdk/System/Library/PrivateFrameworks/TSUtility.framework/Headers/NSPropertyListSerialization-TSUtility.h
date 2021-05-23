/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSPropertyListSerialization.h>

@interface NSPropertyListSerialization (TSUtility)

+ (void)tsu_processLocalizedPropertyList:(id)arg1;
+ (id)tsu_propertyListWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (id)tsu_localizedPropertyListWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;

@end
