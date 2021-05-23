/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface EFSQLOrderByExpressionGenerator : NSObject

{
    _Bool _ascending;
    NSArray *_generators;
}

@property (nonatomic, readonly) NSArray *generators;
@property (nonatomic, readonly) _Bool ascending;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToEFSQLOrderByExpressionGenerator:(id)arg1;
- (id)initWithGenerators:(id)arg1 ascending:(_Bool)arg2;
- (id)orderByExpression;

@end
