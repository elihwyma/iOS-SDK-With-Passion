/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSFaultHandler : NSObject

+ (void)initialize;
+ (_Bool)accessInstanceVariablesDirectly;

- (id)retainedFulfillAggregateFaultForObject:(id)arg1 andRelationship:(id)arg2 withContext:(id)arg3;
- (id)initWithPersistenceStore:(id)arg1;
- (id)fulfillFault:(id)arg1 withContext:(id)arg2 forIndex:(unsigned long long)arg3;
- (id)fulfillFault:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (void)fulfillFault:(id)arg1 withContext:(id)arg2;
- (id)retainedOrderedFaultInformationForAggregateFaultForObject:(id)arg1 andRelationship:(id)arg2 withContext:(id)arg3 error:(id *)arg4;
- (void)turnObject:(id)arg1 intoFaultWithContext:(id)arg2;
- (void)_fireFirstAndSecondLevelFaultsForObject:(id)arg1 withContext:(id)arg2;

@end
