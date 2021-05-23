/*
 Image: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation
 */

#import <Foundation/NSString.h>

@interface NSString (IntentsFoundation)

+ (id)if_hexStringFromData:(id)arg1;
+ (id)if_hexStringFromBytes:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)if_stringWithData:(id)arg1;

- (id)if_ASCIIStringByUppercasingFirstCharacter;
- (id)if_stringByLowercasingFirstCharacter;
- (id)if_stringByUppercasingFirstCharacter;
- (id)if_ASCIIStringByLowercasingFirstCharacter;

@end
