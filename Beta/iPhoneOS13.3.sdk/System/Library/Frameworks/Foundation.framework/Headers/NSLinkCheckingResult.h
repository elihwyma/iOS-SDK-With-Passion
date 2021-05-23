/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSTextCheckingResult.h>

@class NSURL;

@interface NSLinkCheckingResult : NSTextCheckingResult

{
    struct _NSRange _range;
    NSURL *_url;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)URL;
- (struct _NSRange)range;
- (unsigned long long)resultType;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;
- (_Bool)_adjustRangesWithOffset:(long long)arg1;
- (id)initWithRange:(struct _NSRange)arg1 URL:(id)arg2;

@end
