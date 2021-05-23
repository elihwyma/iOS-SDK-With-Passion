/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSPredicate.h>

@class NSArray;

@interface NSCompoundPredicate : NSPredicate

{
    void *_reserved2;
    unsigned long long _type;
    NSArray *_subpredicates;
}

@property (readonly) unsigned long long compoundPredicateType;
@property (copy, readonly) NSArray *subpredicates;

+ (_Bool)supportsSecureCoding;
+ (id)_operatorForType:(unsigned long long)arg1;
+ (id)andPredicateWithSubpredicates:(id)arg1;
+ (id)orPredicateWithSubpredicates:(id)arg1;
+ (id)notPredicateWithSubpredicate:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)generateMetadataDescription;
- (void)allowEvaluation;
- (id)predicateFormat;
- (id)predicateOperator;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (_Bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (id)predicateWithSubstitutionVariables:(id)arg1;
- (id)_predicateOperator;
- (id)initWithType:(unsigned long long)arg1 subpredicates:(id)arg2;
- (id)_copySubpredicateDescription:(id)arg1;
- (void)_acceptSubpredicates:(id)arg1 flags:(unsigned long long)arg2;

@end
