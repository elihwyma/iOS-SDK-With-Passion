/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSString;

@interface HDSQLiteOrderingTerm : NSObject <Swift>

{
    _Bool _ascending;
    NSString *_expression;
}

@property (copy, nonatomic, readonly) NSString *expression;
@property (nonatomic, readonly) _Bool ascending;

+ (id)orderingTermWithProperty:(id)arg1 entityClass:(Class)arg2 ascending:(_Bool)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)SQL;
- (id)initWithExpression:(id)arg1 ascending:(_Bool)arg2;

@end
