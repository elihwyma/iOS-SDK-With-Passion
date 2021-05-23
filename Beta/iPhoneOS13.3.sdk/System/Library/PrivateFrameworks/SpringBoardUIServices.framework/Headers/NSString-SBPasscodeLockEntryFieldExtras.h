/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <Foundation/NSString.h>

@interface NSString (SBPasscodeLockEntryFieldExtras)

- (_Bool)isSingleCharacterAndMemberOfSet:(id)arg1;
- (_Bool)isNewline;
- (_Bool)sb_isEntirelyCharactersInSet:(struct USet *)arg1;
- (_Bool)_isEntirelyCommon;
- (id)_adjustedFontForScripts:(long long)arg1 forFont:(id)arg2 withPointAdjustment:(double)arg3 ignoringContent:(_Bool)arg4;
- (_Bool)_isEntirelyCharactersInScript:(long long)arg1;
- (_Bool)_isInScript:(long long)arg1 useLocaleOnly:(_Bool)arg2;
- (id)_adjustedFontForScripts:(long long)arg1 forFont:(id)arg2;
- (id)_adjustedFontForScripts:(long long)arg1 forFont:(id)arg2 withPointAdjustment:(double)arg3;
- (id)_adjustedFontForScripts:(long long)arg1 forFont:(id)arg2 ignoringContent:(_Bool)arg3;
- (_Bool)sb_containsEmoji;

@end
