/*
 Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

#import <ProofReader/PRModification.h>

@class NSString;

@interface PRPinyinModification : PRModification

{
    struct _NSRange _range;
    NSString *_replacementString;
    unsigned long long _modificationType;
    struct _NSRange _syllableRange;
    struct _NSRange _additionalSyllableRange;
    double _modificationScore;
    unsigned long long _syllableCountScore;
    unsigned char _letters[7];
    _Bool _producesPartialSyllable;
    _Bool _isTemporary;
}

+ (id)modificationsForInputString:(id)arg1;
+ (id)finalModificationsForInputString:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (struct _NSRange)range;
- (id)replacementString;
- (unsigned long long)modificationType;
- (struct _NSRange)syllableRange;
- (double)modificationScore;
- (struct _NSRange)additionalSyllableRange;
- (_Bool)isTemporary;
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(struct _NSRange)arg4 additionalSyllableRange:(struct _NSRange)arg5 modificationScore:(double)arg6 syllableCountScore:(unsigned long long)arg7 syllableLetters:(const char *)arg8 producesPartialSyllable:(_Bool)arg9;
- (unsigned long long)syllableCountScore;
- (_Bool)producesPartialSyllable;
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(struct _NSRange)arg4 modificationScore:(double)arg5 syllableCountScore:(unsigned long long)arg6 syllableLetters:(const char *)arg7 producesPartialSyllable:(_Bool)arg8;
- (struct _NSRange)combinedSyllableRange;
- (_Bool)_shouldAppendLetter:(unsigned char)arg1;
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(struct _NSRange)arg4 additionalSyllableRange:(struct _NSRange)arg5 modificationScore:(double)arg6 syllableCountScore:(unsigned long long)arg7 syllableLetters:(const char *)arg8 producesPartialSyllable:(_Bool)arg9 isTemporary:(_Bool)arg10;
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(struct _NSRange)arg4 additionalSyllableRange:(struct _NSRange)arg5 modificationScore:(double)arg6;
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(struct _NSRange)arg4 modificationScore:(double)arg5 syllableCountScore:(unsigned long long)arg6 syllableLetters:(const char *)arg7 producesPartialSyllable:(_Bool)arg8 isTemporary:(_Bool)arg9;
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(struct _NSRange)arg4 modificationScore:(double)arg5 isTemporary:(_Bool)arg6;
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(struct _NSRange)arg4 modificationScore:(double)arg5;

@end
