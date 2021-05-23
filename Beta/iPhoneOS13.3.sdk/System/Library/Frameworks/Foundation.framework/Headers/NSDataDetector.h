/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSRegularExpression.h>

@interface NSDataDetector : NSRegularExpression

{
    unsigned long long _types;
}

@property (readonly) unsigned long long checkingTypes;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)dataDetectorWithTypes:(unsigned long long)arg1 error:(id *)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (unsigned long long)options;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPattern:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)pattern;
- (unsigned long long)numberOfCaptureGroups;
- (void)enumerateMatchesInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)initWithTypes:(unsigned long long)arg1 error:(id *)arg2;

@end
