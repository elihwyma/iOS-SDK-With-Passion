/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSTextCheckingResult.h>

@class NSString;

@interface NSSubstitutionCheckingResult : NSTextCheckingResult

{
    struct _NSRange _range;
    NSString *_replacementString;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct _NSRange)range;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;
- (_Bool)_adjustRangesWithOffset:(long long)arg1;
- (id)replacementString;
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2;

@end
