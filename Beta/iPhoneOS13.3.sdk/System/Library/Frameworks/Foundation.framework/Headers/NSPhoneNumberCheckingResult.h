/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSTextCheckingResult.h>

@class NSString;

@interface NSPhoneNumberCheckingResult : NSTextCheckingResult

{
    struct _NSRange _range;
    NSString *_phoneNumber;
    id _underlyingResult;
}

@property (readonly) void *underlyingResult;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct _NSRange)range;
- (unsigned long long)resultType;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;
- (_Bool)_adjustRangesWithOffset:(long long)arg1;
- (id)phoneNumber;
- (id)initWithRange:(struct _NSRange)arg1 phoneNumber:(id)arg2;
- (id)initWithRange:(struct _NSRange)arg1 phoneNumber:(id)arg2 underlyingResult:(void *)arg3;

@end
