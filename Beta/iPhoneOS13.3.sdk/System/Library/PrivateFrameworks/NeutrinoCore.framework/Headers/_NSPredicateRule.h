/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NSPredicateRule.h>

@protocol NSObject;

@interface _NSPredicateRule : NSPredicateRule

{
    id <NSObject> _fact;
    double _grade;
    _Bool _asserting;
}

+ (_Bool)supportsSecureCoding;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)performActionWithSystem:(id)arg1;
- (id)initWithPredicate:(id)arg1 fact:(id)arg2 grade:(double)arg3 asserting:(_Bool)arg4;

@end
