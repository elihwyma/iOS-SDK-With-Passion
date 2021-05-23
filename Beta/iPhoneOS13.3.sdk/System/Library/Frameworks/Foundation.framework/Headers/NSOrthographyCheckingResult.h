/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSTextCheckingResult.h>

@class NSOrthography;

@interface NSOrthographyCheckingResult : NSTextCheckingResult

{
    struct _NSRange _range;
    NSOrthography *_orthography;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct _NSRange)range;
- (unsigned long long)resultType;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;
- (_Bool)_adjustRangesWithOffset:(long long)arg1;
- (id)orthography;
- (id)initWithRange:(struct _NSRange)arg1 orthography:(id)arg2;

@end
