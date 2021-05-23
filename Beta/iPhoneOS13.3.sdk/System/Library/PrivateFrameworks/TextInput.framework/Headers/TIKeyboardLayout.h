/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@interface TIKeyboardLayout : NSObject

{
    _Bool _usesTwoHands;
    unsigned long long _count;
    struct _ShortRect *_frames;
    unsigned long long _framesCapacity;
    char *_strings;
    unsigned long long _stringsSize;
    unsigned long long _stringsCapacity;
    struct CGRect _frame;
}

@property (nonatomic) _Bool usesTwoHands;
@property (nonatomic, readonly) struct CGRect frame;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addKeyWithString:(id)arg1 frame:(struct CGRect)arg2;
- (void)_encodeCGRect:(struct CGRect)arg1 forKey:(id)arg2 withCoder:(id)arg3;
- (struct CGRect)_decodeCGRectForKey:(id)arg1 withDecoder:(id)arg2;
- (void)ensureFrameCapacity:(unsigned long long)arg1;
- (void)ensureStringCapacity:(unsigned long long)arg1;
- (void)enumerateKeysUsingBlock:(CDUnknownBlockType)arg1;
- (const char *)firstKeyString;
- (long long)keyContainingPoint:(struct CGPoint)arg1;

@end
