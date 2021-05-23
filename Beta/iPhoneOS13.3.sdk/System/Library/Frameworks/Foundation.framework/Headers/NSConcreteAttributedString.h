/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSAttributedString.h>

@class NSRLEArray, NSString;

@interface NSConcreteAttributedString : NSAttributedString

{
    NSString *string;
    NSRLEArray *attributes;
}

- (id)init;
- (id)string;
- (void)dealloc;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 attributes:(id)arg2;
- (id)initWithAttributedString:(id)arg1;
- (id)_runArrayHoldingAttributes;

@end
