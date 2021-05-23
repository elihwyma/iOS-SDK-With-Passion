/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface EFSQLGeneratorCompoundPredicateNode : NSObject

{
    unsigned long long _predicateType;
    NSArray *_childPredicates;
}

@property (nonatomic, readonly) unsigned long long predicateType;
@property (nonatomic, readonly) NSArray *childPredicates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)sqlExpressableWithTableExpressions:(id)arg1;
- (void)traverseTreeWithAliasMap:(id)arg1;
- (id)initWithPredicateType:(unsigned long long)arg1 childPredicates:(id)arg2;

@end
