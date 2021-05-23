/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIStyleEffectConfiguration.h>

@class NSString;

@interface CUIBackgroundStyleEffectConfiguration : CUIStyleEffectConfiguration

{
    NSString *_backgroundType;
    _Bool _effectShowsValue;
    int _shouldRespectOutputBlending;
}

@property (copy, nonatomic) NSString *backgroundType;
@property (nonatomic) _Bool effectShowsValue;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)shouldIgnoreForegroundColor;
- (_Bool)shouldRespectOutputBlending;
- (void)setShouldRespectOutputBlending:(_Bool)arg1;
- (void)setSelectionType:(long long)arg1;

@end
