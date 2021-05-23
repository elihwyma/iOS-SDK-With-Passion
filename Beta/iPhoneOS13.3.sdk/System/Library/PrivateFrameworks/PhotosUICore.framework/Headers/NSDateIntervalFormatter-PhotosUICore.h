/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSDateIntervalFormatter.h>

@interface NSDateIntervalFormatter (PhotosUICore)

- (id)px_dateTemplateForGranularity:(unsigned long long)arg1 abbreviated:(_Bool)arg2;
- (id)px_attributedStringFromDateInterval:(id)arg1 defaultAttributes:(id)arg2 emphasizedAttributes:(id)arg3;
- (_Bool)px_customizesAttributedString;
- (_Bool)_px_isChineseYearTemplate;
- (id)_px_substitutions;
- (id)_px_localizedCapitalizedString:(id)arg1;

@end
