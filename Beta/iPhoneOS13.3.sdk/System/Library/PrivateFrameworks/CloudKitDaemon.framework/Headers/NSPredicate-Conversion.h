/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSPredicate.h>

@interface NSPredicate (Conversion)

+ (id)predicateWithCKDPQueryFilters:(id)arg1 translator:(id)arg2;
+ (id)predicateWithSortedCKDPQueryFilters:(id)arg1 translator:(id)arg2;

- (id)CKDPQueryFiltersWithTranslator:(id)arg1 error:(id *)arg2;

@end
