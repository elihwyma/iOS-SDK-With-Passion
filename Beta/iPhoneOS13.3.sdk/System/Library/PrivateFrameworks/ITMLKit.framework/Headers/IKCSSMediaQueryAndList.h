/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKCSSMediaQueryList.h>

@class IKMutableArray, NSString;

@interface IKCSSMediaQueryAndList : IKCSSMediaQueryList

{
    IKMutableArray *_queryList;
    _Bool _negated;
    NSString *_type;
}

@property (retain, nonatomic) NSString *type;
@property _Bool negated;

- (id)init;
- (id)description;
- (unsigned long long)count;
- (_Bool)evaluate;
- (id)expressionAsString;
- (id)subQueryAtIndex:(unsigned long long)arg1;
- (void)addQuery:(id)arg1;
- (id)expressionList;

@end
