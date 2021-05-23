/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSString.h>

@interface NSString (ChineseJapanese)

- (unsigned short *)characters;
- (id)_firstComposedCharacter;
- (_Bool)endsInPunctuation;
- (id)longestCommonSubstring:(id)arg1 backwards:(_Bool)arg2;
- (_Bool)TI_hasTruePrefix:(id)arg1;
- (_Bool)TI_hasTrueSuffix:(id)arg1;

@end
