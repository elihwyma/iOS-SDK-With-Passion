/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSTextCheckingResult.h>

@class NSDictionary;

@interface NSTransitInformationCheckingResult : NSTextCheckingResult

{
    struct _NSRange _range;
    NSDictionary *_components;
    id _underlyingResult;
}

@property (readonly) void *underlyingResult;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)components;
- (struct _NSRange)range;
- (unsigned long long)resultType;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;
- (_Bool)_adjustRangesWithOffset:(long long)arg1;
- (id)initWithRange:(struct _NSRange)arg1 components:(id)arg2;
- (id)initWithRange:(struct _NSRange)arg1 components:(id)arg2 underlyingResult:(void *)arg3;

@end
