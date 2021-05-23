/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSString;

@interface NSRegularExpression : NSObject <Swift>

{
    NSString *_pattern;
    unsigned long long _options;
    void *_internal;
    id _reserved1;
    int _checkout;
    int _reserved2;
}

@property (copy, readonly) NSString *pattern;
@property (readonly) unsigned long long options;
@property (readonly) unsigned long long numberOfCaptureGroups;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)escapedPatternForString:(id)arg1;
+ (id)regularExpressionWithPattern:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (id)escapedTemplateForString:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)_captureGroupNumberWithName:(id)arg1;
- (struct _NSRange)rangeOfFirstMatchInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (id)stringByReplacingMatchesInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 withTemplate:(id)arg4;
- (unsigned long long)replaceMatchesInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 withTemplate:(id)arg4;
- (id)initWithPattern:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void)enumerateMatchesInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)matchesInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (unsigned long long)numberOfMatchesInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (id)firstMatchInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (id)replacementStringForResult:(id)arg1 inString:(id)arg2 offset:(long long)arg3 template:(id)arg4;

@end
