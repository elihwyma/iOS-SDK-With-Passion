/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSTextCheckingResult.h>

@class NSArray;

@interface NSGrammarCheckingResult : NSTextCheckingResult

{
    struct _NSRange _range;
    NSArray *_details;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct _NSRange)range;
- (unsigned long long)resultType;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;
- (_Bool)_adjustRangesWithOffset:(long long)arg1;
- (id)grammarDetails;
- (id)initWithRange:(struct _NSRange)arg1 details:(id)arg2;

@end
