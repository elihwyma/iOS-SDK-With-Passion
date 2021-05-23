/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFContentPredicate.h>

@class NSArray, NSSet;

@interface WFContentCompoundPredicate : WFContentPredicate

{
    unsigned long long _compoundPredicateType;
    NSArray *_subpredicates;
}

@property (readonly) unsigned long long compoundPredicateType;
@property (copy, readonly) NSArray *subpredicates;
@property (nonatomic, readonly) NSSet *containedProperties;

+ (id)andPredicateWithSubpredicates:(id)arg1;
+ (id)orPredicateWithSubpredicates:(id)arg1;
+ (id)notPredicateWithSubpredicate:(id)arg1;

- (id)description;
- (id)initWithType:(unsigned long long)arg1 subpredicates:(id)arg2;
- (void)evaluateWithObject:(id)arg1 propertySubstitutor:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
