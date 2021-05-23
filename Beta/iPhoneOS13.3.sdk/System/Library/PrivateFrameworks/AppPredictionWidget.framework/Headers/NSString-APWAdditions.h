/*
 Image: /System/Library/PrivateFrameworks/AppPredictionWidget.framework/AppPredictionWidget
 */

#import <Foundation/NSString.h>

@interface NSString (APWAdditions)

- (_Bool)apwsb_isEntirelyCharactersInSet:(struct USet *)arg1;
- (_Bool)apw_isEntirelyCommon;
- (id)_apw_adjustedFontForScripts:(long long)arg1 forFont:(id)arg2 withPointAdjustment:(double)arg3 ignoringContent:(_Bool)arg4;
- (_Bool)apw_isEntirelyCharactersInScript:(long long)arg1;
- (_Bool)apw_isInScript:(long long)arg1 useLocaleOnly:(_Bool)arg2;
- (id)_apw_adjustedFontForScripts:(long long)arg1 forFont:(id)arg2;
- (id)_apw_adjustedFontForScripts:(long long)arg1 forFont:(id)arg2 withPointAdjustment:(double)arg3;
- (id)_apw_adjustedFontForScripts:(long long)arg1 forFont:(id)arg2 ignoringContent:(_Bool)arg3;
- (_Bool)_apwsb_containsEmoji;

@end
