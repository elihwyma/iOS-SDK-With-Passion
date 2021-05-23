/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSTextCheckingResult.h>

@class NSArray, NSRegularExpression;

@interface NSRegularExpressionCheckingResult : NSTextCheckingResult

@property (readonly) NSRegularExpression *regularExpression;
@property (readonly) NSArray *rangeArray;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)resultType;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;
- (struct _NSRange)rangeWithName:(id)arg1;
- (id)initWithRanges:(struct _NSRange *)arg1 count:(unsigned long long)arg2 regularExpression:(id)arg3;
- (id)initWithRangeArray:(id)arg1 regularExpression:(id)arg2;

@end
