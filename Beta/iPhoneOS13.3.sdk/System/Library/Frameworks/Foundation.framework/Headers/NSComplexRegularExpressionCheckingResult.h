/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSRegularExpressionCheckingResult.h>

@class NSArray, NSRegularExpression;

@interface NSComplexRegularExpressionCheckingResult : NSRegularExpressionCheckingResult

{
    NSRegularExpression *_regularExpression;
    NSArray *_rangeArray;
}

- (void)dealloc;
- (struct _NSRange)rangeAtIndex:(unsigned long long)arg1;
- (struct _NSRange)range;
- (unsigned long long)numberOfRanges;
- (_Bool)_adjustRangesWithOffset:(long long)arg1;
- (id)regularExpression;
- (id)initWithRanges:(struct _NSRange *)arg1 count:(unsigned long long)arg2 regularExpression:(id)arg3;
- (id)rangeArray;
- (id)initWithRangeArray:(id)arg1 regularExpression:(id)arg2;

@end
