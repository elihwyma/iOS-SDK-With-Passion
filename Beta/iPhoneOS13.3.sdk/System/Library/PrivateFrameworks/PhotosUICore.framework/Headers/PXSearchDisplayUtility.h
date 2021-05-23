/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXSearchDisplayUtility : NSObject

+ (_Bool)shouldUseAccessibilityLayout;
+ (_Bool)attributedStringFontNeedsUpdate:(id)arg1 currentFont:(struct UIFont *)arg2;
+ (id)highlightedAttributedStringForString:(id)arg1 highlightedSubstring:(id)arg2 matchedColor:(struct UIColor *)arg3 remainingColor:(struct UIColor *)arg4;
+ (id)defaultStringAttributes;
+ (struct UIColor *)wordEmbeddingTextColor;
+ (struct UIColor *)wordEmbeddingPathColor;
+ (struct UIImage *)imageForImageName:(id)arg1;
+ (struct UIImage *)_px_PhotosImageNamed:(id)arg1;
+ (_Bool)layoutDirectionIsRTL;
+ (double)automaticRowHeight;
+ (id)displayStringFromResultCount:(unsigned long long)arg1;

@end
