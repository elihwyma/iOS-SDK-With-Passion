/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSString.h>

__attribute__((visibility("hidden")))
@interface NSDebugString : NSString

{
    NSString *string;
}

- (void)dealloc;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (id)initWithString:(id)arg1;

@end
