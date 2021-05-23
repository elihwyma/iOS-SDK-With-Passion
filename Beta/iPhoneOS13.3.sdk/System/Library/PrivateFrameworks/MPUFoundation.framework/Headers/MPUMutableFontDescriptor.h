/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <MPUFoundation/MPUFontDescriptor.h>

@interface MPUMutableFontDescriptor : MPUFontDescriptor

@property (nonatomic) long long textStyle;
@property (nonatomic) double systemFontSize;
@property (nonatomic) long long weight;
@property (nonatomic) long long leadingAdjustment;
@property (nonatomic) double defaultPointSizeAdjustment;
@property (nonatomic) _Bool usesItalic;
@property (nonatomic) _Bool usesCondensedMetrics;
@property (nonatomic) _Bool wantsMonospaceNumbers;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_resetToDefaultValues;
- (id)_copyAllowingGlobalCacheLookup:(_Bool)arg1;

@end
