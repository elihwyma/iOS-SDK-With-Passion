/*
 Image: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
 */

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

@interface BMItemMO : NSManagedObject

@property (copy, nonatomic) NSString *normalizedValue;
@property (copy, nonatomic) NSString *typeIdentifier;
@property (copy, nonatomic) NSString *uniformIdentifier;
@property (retain, nonatomic) NSSet *antecedentOfRules;
@property (retain, nonatomic) NSSet *consequentOfRules;

+ (id)fetchRequest;

@end
