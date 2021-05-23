/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <UIFoundation/_UIFontCacheKey.h>

@class NSString, UIFontDescriptor;

@interface _UIFontDescriptorCacheKey : _UIFontCacheKey

{
    _Bool _textLegibility;
    UIFontDescriptor *_fontDescriptor;
    double _pointSize;
    NSString *_textStyleForScaling;
    double _pointSizeForScaling;
    double _maximumPointSizeAfterScaling;
}

@property (copy, nonatomic) UIFontDescriptor *fontDescriptor;
@property (nonatomic) double pointSize;
@property (copy, nonatomic) NSString *textStyleForScaling;
@property (nonatomic) double pointSizeForScaling;
@property (nonatomic) double maximumPointSizeAfterScaling;
@property (nonatomic) _Bool textLegibility;

- (void)dealloc;
- (id)description;
- (unsigned long long)_hash;
- (_Bool)_isEqualToKey:(id)arg1;

@end
