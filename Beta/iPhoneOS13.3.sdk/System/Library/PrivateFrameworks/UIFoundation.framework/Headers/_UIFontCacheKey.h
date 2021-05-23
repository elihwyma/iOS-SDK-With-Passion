/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@interface _UIFontCacheKey : NSObject

{
    unsigned long long _hash;
}

+ (id)fontCacheKeyWithTextStyle:(id)arg1 contentSizeCategory:(id)arg2 textLegibility:(_Bool)arg3;
+ (id)fontCacheKeyWithFontDescriptor:(id)arg1 pointSize:(double)arg2 textStyleForScaling:(id)arg3 pointSizeForScaling:(double)arg4 maximumPointSizeAfterScaling:(double)arg5 textLegibility:(_Bool)arg6;
+ (id)fontCacheKeyWithFontName:(id)arg1 traits:(int)arg2 pointSize:(double)arg3;
+ (id)systemFontCacheKeyWithTraits:(int)arg1 pointSize:(double)arg2;
+ (id)fontCacheKeyWithTextStyle:(id)arg1 contentSizeCategory:(id)arg2;
+ (id)fontCacheKeyWithFontDescriptor:(id)arg1 pointSize:(double)arg2 textStyleForScaling:(id)arg3 pointSizeForScaling:(double)arg4 maximumPointSizeAfterScaling:(double)arg5;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)_hash;
- (void)_precalculateHash;
- (_Bool)_isEqualToKey:(id)arg1;

@end
