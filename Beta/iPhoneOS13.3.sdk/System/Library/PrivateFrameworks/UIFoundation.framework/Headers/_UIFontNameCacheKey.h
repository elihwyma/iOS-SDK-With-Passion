/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <UIFoundation/_UIFontCacheKey.h>

@class NSString;

@interface _UIFontNameCacheKey : _UIFontCacheKey

{
    int _traits;
    NSString *_fontName;
    double _pointSize;
}

@property (copy, nonatomic) NSString *fontName;
@property (nonatomic) int traits;
@property (nonatomic) double pointSize;

- (void)dealloc;
- (id)description;
- (unsigned long long)_hash;
- (_Bool)_isEqualToKey:(id)arg1;

@end
