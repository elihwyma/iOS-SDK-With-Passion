/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

#import <Foundation/NSObject.h>

@class NSString, NUISizeCache, TLKRichText;

__attribute__((visibility("hidden")))
@interface TLKLabelItem : NSObject

{
    unsigned long long row;
    double horizontalHuggingPriority;
    double horizontalCompressionResistance;
    NUISizeCache *sizeCache;
    TLKRichText *_richText;
    struct _NSRange columnRange;
    struct CGRect frame;
}

@property (retain, nonatomic) TLKRichText *richText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct CGRect frame;
@property (nonatomic) struct _NSRange columnRange;
@property (nonatomic) unsigned long long row;
@property (nonatomic) double horizontalHuggingPriority;
@property (nonatomic) double horizontalCompressionResistance;
@property (retain, nonatomic) NUISizeCache *sizeCache;

+ (void)initialize;
+ (id)font;
+ (void)setFontValues;
+ (double)minimumWidthForLabelItem;

- (id)init;
- (id)attributedString;
- (float)contentCompressionResistancePriorityForAxis:(long long)arg1;
- (float)contentHuggingPriorityForAxis:(long long)arg1;
- (_Bool)isLayoutSizeDependentOnPerpendicularAxis;
- (double)effectiveBaselineOffsetFromContentBottom;
- (double)effectiveFirstBaselineOffsetFromContentTop;
- (struct CGSize)sizeForTargetSize:(struct CGSize)arg1;

@end
