/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSRegularExpressionCheckingResult.h>

@class NSRegularExpression;

@interface NSExtendedRegularExpressionCheckingResult : NSRegularExpressionCheckingResult

{
    NSRegularExpression *_regularExpression;
    struct _NSRange _ranges[7];
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
