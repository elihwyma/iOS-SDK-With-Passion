/*
 Image: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
 */

#import <TextInputChinese/TIWordSearchShapeBased.h>

@interface TIWordSearchCangjie : TIWordSearchShapeBased

{
    _Bool _suchengEnabled;
    _Bool _supportsEnglish;
}

@property _Bool suchengEnabled;
@property _Bool supportsEnglish;

- (int)mecabraInputMethodType;
- (id)initTIWordSearchWithInputMode:(id)arg1;
- (id)uncachedCandidatesForOperation:(id)arg1;
- (_Bool)validateCode:(id)arg1 withOption:(unsigned long long)arg2;

@end
