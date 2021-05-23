/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

#import <TemplateKit/TLKGridLayoutManager.h>

__attribute__((visibility("hidden")))
@interface TLKManyTrailingGridLayoutManager : TLKGridLayoutManager

{
    struct _NSRange _ignoreRange;
}

@property (nonatomic) struct _NSRange ignoreRange;

+ (id)computeTruncationForAlignments:(id)arg1 indexForFirstTrailingColumn:(unsigned long long)arg2 totalEqualColumns:(unsigned long long)arg3;

- (double)gridArrangement:(id)arg1 widthOfColumnAtIndex:(long long)arg2 spacingAfter:(double *)arg3;
- (struct CGSize)sizeForFittingSize:(struct CGSize)arg1 forRow:(id)arg2;

@end
