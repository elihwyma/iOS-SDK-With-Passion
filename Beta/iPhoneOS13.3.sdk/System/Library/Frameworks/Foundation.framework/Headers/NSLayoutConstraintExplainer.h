/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSLayoutConstraint, NSMapTable, NSMutableSet;

@interface NSLayoutConstraintExplainer : NSObject

{
    NSLayoutConstraint *_constraint;
    NSMutableSet *_requiredConstraints;
    NSMutableSet *_frozenConstraints;
    NSMutableSet *_relaxedConstraints;
    NSMapTable *_satisfactionChanges;
    NSMapTable *_priorities;
    NSArray *_mutuallyExclusiveConstraints;
}

@property (retain) NSMapTable *satisfactionChanges;
@property (retain) NSMapTable *priorities;
@property (retain) NSArray *mutuallyExclusiveConstraints;

- (void)dealloc;
- (id)description;
- (void)recalculateExplanation;
- (void)_freezeErrorVariable:(id)arg1 forcingZeroValue:(_Bool)arg2 inEngine:(id)arg3 accumulatingConstraints:(id)arg4 andMutuallyExclusiveConstraints:(id *)arg5;
- (unsigned long long)_satisfactionChangeCount:(CDUnknownBlockType)arg1 withResults:(id *)arg2;
- (id)thawConstraint:(id)arg1;
- (id)relaxConstraint:(id)arg1;
- (id)initWithConstraint:(id)arg1;
- (id)requireConstraint:(id)arg1;
- (id)freezeConstraint:(id)arg1;

@end
