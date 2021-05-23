/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSCalendar.h>

@interface NSCalendar (HDDeletedObjectEntityPredicates)

- (id)hd_predicateForDeletedObjectsCreatedOnOrAfterDate:(id)arg1 minusDays:(unsigned long long)arg2;
- (id)hd_predicateForDeletedObjectsCreatedBeforeDate:(id)arg1 minusDays:(unsigned long long)arg2;
- (id)hd_predicateForSamplesWithTypes:(id)arg1 endingAfterDate:(id)arg2 minusDays:(unsigned long long)arg3;
- (id)hd_predicateForSamplesWithTypes:(id)arg1 endingBeforeDate:(id)arg2 minusDays:(unsigned long long)arg3;

@end
