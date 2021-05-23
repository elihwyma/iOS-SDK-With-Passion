/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <UIFoundation/_UIFontCacheKey.h>

@interface _UIFontSystemCacheKey : _UIFontCacheKey

{
    _Bool _textLegibility;
    int _traits;
    double _pointSize;
}

@property (nonatomic) int traits;
@property (nonatomic) double pointSize;
@property (nonatomic) _Bool textLegibility;

- (id)description;
- (unsigned long long)_hash;
- (_Bool)_isEqualToKey:(id)arg1;

@end
