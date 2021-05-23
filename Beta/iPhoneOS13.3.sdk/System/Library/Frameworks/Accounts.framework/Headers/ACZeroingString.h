/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <Foundation/NSString.h>

@interface ACZeroingString : NSString

{
    unsigned short *_characters;
    unsigned long long _length;
}

@property (readonly) unsigned short *characters;
@property (readonly) unsigned long long length;

+ (_Bool)supportsSecureCoding;
+ (Class)classForKeyedUnarchiver;
+ (id)_emptyString;

- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithUTF8String:(const char *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (Class)classForCoder;
- (id)initWithString:(id)arg1;
- (id)initWithCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;
- (id)replacementObjectForCoder:(id)arg1;
- (Class)classForKeyedArchiver;
- (_Bool)_allowsDirectEncoding;
- (id)_compatibleCopy;

@end
