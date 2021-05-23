/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSString.h>

__attribute__((visibility("hidden")))
@interface VKInternedString : NSString

{
    NSString *original;
}

+ (void)initialize;
+ (id)stringWithString:(id)arg1;

- (void)dealloc;
- (unsigned long long)length;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (id)substringWithRange:(struct _NSRange)arg1;
- (_Bool)isEqualToString:(id)arg1;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;
- (id)initWithString:(id)arg1;
- (id)substringFromIndex:(unsigned long long)arg1;
- (id)substringToIndex:(unsigned long long)arg1;

@end
