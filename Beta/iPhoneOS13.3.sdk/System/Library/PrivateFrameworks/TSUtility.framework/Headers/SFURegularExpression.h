/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

#import <TSUtility/Swift-Protocol.h>

@class NSString;

@interface SFURegularExpression : NSObject <Swift>

{
    NSString *_expressionString;
    void *_reserved;
}

+ (void)initialize;
+ (id)regularExpressionWithString:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)expressionString;
- (id)initWithExpressionString:(id)arg1;
- (id)initWithExpressionString:(id)arg1 options:(unsigned int)arg2;
- (unsigned long long)numberOfSubexpressions;
- (struct _NSRange)matchedRangeForCString:(const char *)arg1 range:(struct _NSRange)arg2 subexpressionRanges:(struct _NSRange *)arg3 count:(unsigned int)arg4;
- (struct _NSRange)matchedRangeForString:(id)arg1 range:(struct _NSRange)arg2 subexpressionRanges:(struct _NSRange *)arg3 count:(unsigned int)arg4;
- (const char *)getBytesForString:(id)arg1 lossByte:(unsigned char)arg2;

@end
