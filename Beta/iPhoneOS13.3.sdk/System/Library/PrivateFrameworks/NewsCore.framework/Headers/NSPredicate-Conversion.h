/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSPredicate.h>

@interface NSPredicate (Conversion)

+ (id)predicateWithFCCKPQueryFilters:(id)arg1 translator:(id)arg2;
+ (id)predicateWithSortedFCCKPQueryFilters:(id)arg1 translator:(id)arg2;

- (id)FCCKPQueryFiltersWithTranslator:(id)arg1 error:(id *)arg2;

@end
