/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKCSSMediaQueryList.h>

@class IKMutableArray;

@interface IKCSSMediaQueryOrList : IKCSSMediaQueryList

{
    IKMutableArray *_queryList;
}

- (id)init;
- (id)description;
- (unsigned long long)count;
- (_Bool)evaluate;
- (id)expressionAsString;
- (id)subQueryAtIndex:(unsigned long long)arg1;
- (id)subQueryList;
- (void)addSubQueryList:(id)arg1;

@end
