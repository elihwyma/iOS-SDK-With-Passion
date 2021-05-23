/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSMutableString.h>

@class NSData;

@interface NSBigMutableString : NSMutableString

{
    struct {
        unsigned int isStorage:1;
        unsigned int isUnicode:1;
        unsigned int hasBOM:1;
        unsigned int swap:1;
        unsigned int immutable:1;
        unsigned int :27;
    } flags;
    unsigned long long length;
    union {
        struct {
            NSData *data;
            char *dataBytes;
        } d;
        struct {
            struct __CFStorage *storage;
        } s;
    } contents;
}

- (void)dealloc;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (id)_newSubstringWithRange:(struct _NSRange)arg1 zone:(struct _NSZone *)arg2;
- (_Bool)_isCString;
- (id)_createSubstringWithRange:(struct _NSRange)arg1;
- (id)initWithString:(id)arg1;
- (void)_checkForInvalidMutationWithSelector:(SEL)arg1;
- (_Bool)_copyDataFrom:(id)arg1 range:(struct _NSRange)arg2;
- (_Bool)_copyStorage:(struct __CFStorage **)arg1 encoding:(unsigned long long *)arg2;
- (_Bool)_setStorage:(struct __CFStorage *)arg1 encoding:(unsigned long long)arg2;
- (_Bool)_setData:(id)arg1 encoding:(unsigned long long)arg2;
- (id)initWithStorage:(struct __CFStorage *)arg1 length:(unsigned long long)arg2 isUnicode:(_Bool)arg3;
- (void)_markAsImmutable;
- (id)_newSmallImmutableSubstringWithRange:(struct _NSRange)arg1 zone:(struct _NSZone *)arg2;
- (id)_newBigSubstringWithRange:(struct _NSRange)arg1 wantsMutable:(_Bool)arg2 zone:(struct _NSZone *)arg3;
- (_Bool)_isMarkedAsImmutable;
- (_Bool)_getData:(id *)arg1 encoding:(unsigned long long *)arg2;

@end
