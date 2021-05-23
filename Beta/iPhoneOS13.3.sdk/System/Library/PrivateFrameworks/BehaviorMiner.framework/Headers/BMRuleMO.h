/*
 Image: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
 */

#import <CoreData/NSManagedObject.h>

@class NSSet;

@interface BMRuleMO : NSManagedObject

@property (nonatomic) double confidence;
@property (nonatomic) double support;
@property (retain, nonatomic) NSSet *antecedent;
@property (retain, nonatomic) NSSet *consequent;

+ (id)fetchRequest;

@end
