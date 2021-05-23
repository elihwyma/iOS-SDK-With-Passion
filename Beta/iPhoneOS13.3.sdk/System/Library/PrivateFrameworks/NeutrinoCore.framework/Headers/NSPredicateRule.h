/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURule.h>

@class NSPredicate;

@interface NSPredicateRule : NURule

{
    NSPredicate *_predicate;
}

@property (retain, nonatomic, readonly) NSPredicate *predicate;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1;
- (_Bool)evaluatePredicateWithSystem:(id)arg1;

@end
