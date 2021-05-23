/*
 Image: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
 */

#import <Foundation/NSObject.h>

@interface BMManagedObjectConverter : NSObject

- (id)convertItemMOs:(id)arg1 error:(id *)arg2;
- (id)insertItems:(struct NSSet *)arg1 inManagedObjectContext:(id)arg2;
- (id)convertRuleMOs:(id)arg1 error:(id *)arg2;
- (id)insertRules:(id)arg1 inManagedObjectContext:(id)arg2;

@end
