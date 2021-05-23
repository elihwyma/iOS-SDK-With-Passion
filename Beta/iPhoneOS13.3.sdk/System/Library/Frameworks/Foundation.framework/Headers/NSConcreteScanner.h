/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSScanner.h>

@class NSCharacterSet, NSString;

__attribute__((visibility("hidden")))
@interface NSConcreteScanner : NSScanner

{
    NSString *scanString;
    NSCharacterSet *skipSet;
    NSCharacterSet *invertedSkipSet;
    id locale;
    unsigned long long scanLocation;
    struct {
        unsigned int caseSensitive:1;
        unsigned int :31;
    } flags;
}

- (id)string;
- (void)dealloc;
- (void)setLocale:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)locale;
- (unsigned long long)scanLocation;
- (void)setScanLocation:(unsigned long long)arg1;
- (void)setCharactersToBeSkipped:(id)arg1;
- (_Bool)scanInt:(int *)arg1;
- (id)charactersToBeSkipped;
- (_Bool)caseSensitive;
- (void)setCaseSensitive:(_Bool)arg1;
- (_Bool)scanLongLong:(long long *)arg1;
- (id)_invertedSkipSet;

@end
