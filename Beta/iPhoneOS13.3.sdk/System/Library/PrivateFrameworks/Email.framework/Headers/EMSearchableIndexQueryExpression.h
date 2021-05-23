/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

#import <Email/Swift-Protocol.h>

@class NSString;

@interface EMSearchableIndexQueryExpression : NSObject <Swift>

{
    NSString *_queryString;
}

@property (copy, nonatomic) NSString *queryString;
@property (nonatomic, readonly, getter=isValid) _Bool valid;

+ (id)expressionWithQueryString:(id)arg1;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithQueryString:(id)arg1;

@end
