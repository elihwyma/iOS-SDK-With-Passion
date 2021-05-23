/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKCSSMediaQueryList;

@interface IKCSSMediaQuery : NSObject

{
    _Bool _evaluated;
    _Bool _evaluationResult;
    IKCSSMediaQueryList *_queryList;
}

@property (nonatomic, readonly) IKCSSMediaQueryList *queryList;
@property (readonly) _Bool evaluated;
@property (readonly) _Bool evaluationResult;

+ (id)buildMediaQueryList:(id)arg1 offset:(unsigned long long)arg2 consumed:(unsigned long long *)arg3;
+ (id)buildMediaQuery:(id)arg1 offset:(unsigned long long)arg2 consumed:(unsigned long long *)arg3;
+ (id)buildMediaQueryExpression:(id)arg1;
+ (id)mediaQueryFromTokenList:(id)arg1;

- (id)description;
- (_Bool)evaluate;
- (id)initWithQueryList:(id)arg1;
- (id)queryExpression;
- (void)setNeedsReEvaluation;

@end
