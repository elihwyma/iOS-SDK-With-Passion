/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <UIFoundation/_UIFontCacheKey.h>

@class NSString;

@interface _UIFontTextStyleCacheKey : _UIFontCacheKey

{
    _Bool _textLegibility;
    NSString *_textStyle;
    NSString *_contentSizeCategory;
}

@property (copy, nonatomic) NSString *textStyle;
@property (copy, nonatomic) NSString *contentSizeCategory;
@property (nonatomic) _Bool textLegibility;

- (void)dealloc;
- (id)description;
- (unsigned long long)_hash;
- (_Bool)_isEqualToKey:(id)arg1;

@end
