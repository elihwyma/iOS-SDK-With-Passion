/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <Foundation/NSObject.h>

@interface SCRCComposedCharacter : NSObject

{
    unsigned long long _originalRepresentationLength;
    unsigned long long _normalFormDRepresentationLength;
    unsigned long long _normalFormKCRepresentationLength;
    int *_originalRepresentation;
    int *_normalFormDRepresentation;
    int *_normalFormKCRepresentation;
    long long _originalCombinedCharacterLength;
    struct __CFString *_originalCombinedCharacter;
}

- (void)dealloc;
- (unsigned long long)length;
- (_Bool)isEqual:(id)arg1;
- (int)charAtIndex:(unsigned long long)arg1;
- (struct __CFString *)originalString;
- (id)initWithCharacter:(int)arg1;
- (unsigned long long)originalLength;
- (id)_initWithCharacter:(int)arg1;
- (id)_initWithSimpleCharacter:(int)arg1;
- (id)_initWithComposedCharacter:(struct __CFString *)arg1;
- (void)_buildFormKC;
- (int)formKCCharAtIndex:(unsigned long long)arg1;
- (void)_buildFormD;
- (_Bool)_formKCContaintsUpperCase;
- (unsigned long long)formKCLength;
- (id)initWithComposedCharacter:(struct __CFString *)arg1;
- (_Bool)isEqualToUChar32:(int)arg1;
- (struct __CFString *)copyUnicodeDescriptionString;
- (int)formDCharAtIndex:(unsigned long long)arg1;
- (int)originalFromCharAtIndex:(unsigned long long)arg1;
- (_Bool)containsUpperCase;
- (unsigned long long)formDLength;

@end
