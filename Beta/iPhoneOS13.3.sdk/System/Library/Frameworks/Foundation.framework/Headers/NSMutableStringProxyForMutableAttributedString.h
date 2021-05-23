/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSMutableString.h>

@class NSMutableAttributedString;

@interface NSMutableStringProxyForMutableAttributedString : NSMutableString

{
    NSMutableAttributedString *mutableAttributedString;
}

- (void)dealloc;
- (unsigned long long)length;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (id)initWithMutableAttributedString:(id)arg1;

@end
