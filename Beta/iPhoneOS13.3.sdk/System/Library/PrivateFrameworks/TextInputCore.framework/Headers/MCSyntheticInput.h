/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/MCKeyboardInput.h>

@class NSArray, NSString;

@interface MCSyntheticInput : MCKeyboardInput

{
    _Bool _includeSuffixAsSearchString;
    NSString *_committedText;
    NSArray *_syllables;
    unsigned long long _cursorIndex;
}

@property (nonatomic, readonly) NSString *committedText;
@property (nonatomic, readonly) NSString *uncommittedText;
@property (nonatomic, readonly) NSArray *syllables;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) unsigned long long cursorIndex;
@property (nonatomic) _Bool includeSuffixAsSearchString;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCommittedText:(id)arg1 syllables:(id)arg2;
- (id)syntheticInputWithCommittedText:(id)arg1 syllables:(id)arg2;
- (id)syntheticInputWithCursorIndex:(unsigned long long)arg1;
- (int)syllableIndex:(int *)arg1;
- (id)externalSuffix;

@end
