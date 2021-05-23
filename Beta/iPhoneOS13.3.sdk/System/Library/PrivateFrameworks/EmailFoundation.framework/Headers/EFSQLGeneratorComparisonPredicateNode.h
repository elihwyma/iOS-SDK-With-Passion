/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol EFSQLExpressable;

@interface EFSQLGeneratorComparisonPredicateNode : NSObject

{
    NSArray *_keypathGenerators;
    unsigned long long _predicateOperator;
    id <EFSQLExpressable> _constValue;
}

@property (nonatomic, readonly) NSArray *keypathGenerators;
@property (nonatomic, readonly) unsigned long long predicateOperator;
@property (nonatomic, readonly) id <EFSQLExpressable> constValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)sqlExpressableWithTableExpressions:(id)arg1;
- (void)traverseTreeWithAliasMap:(id)arg1;
- (id)initWithKeypathGenerators:(id)arg1 predicateOperator:(unsigned long long)arg2 constValue:(id)arg3;

@end
