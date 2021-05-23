/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface TISCTextRunRequest : NSObject

{
    NSArray *_strings;
    struct CGColor *_color;
    double _maxFontSize;
    double _minFontSize;
    _Bool _allowTruncation;
    NSString *_truncationSentinel;
    unsigned long long _widthGroup;
}

+ (id)textRunRequestWithStrings:(id)arg1 color:(struct CGColor *)arg2 maxFontSize:(double)arg3 minFontSize:(double)arg4 allowTruncation:(_Bool)arg5 truncationSentinel:(id)arg6 widthGroup:(unsigned long long)arg7;

- (void)dealloc;
- (struct CGColor *)color;
- (double)minFontSize;
- (id)strings;
- (double)maxFontSize;
- (id)truncationSentinel;
- (_Bool)allowTruncation;
- (unsigned long long)widthGroup;

@end
