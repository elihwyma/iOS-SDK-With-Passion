/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UILabel.h>

@interface HKSelectedRangeLabel : UILabel

{
    struct UIEdgeInsets _padding;
}

@property (nonatomic) struct UIEdgeInsets padding;

+ (void)clearCaches;
+ (id)attributedStringForSelectedRangeData:(id)arg1 font:(id)arg2 foregroundColor:(id)arg3 prefersImageAffixes:(_Bool)arg4;
+ (id)_prefixColorForSelectedRangeData:(id)arg1 defaultColor:(id)arg2;
+ (id)_stringForSelectedRangeData:(id)arg1;

- (id)init;
- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)setSelectedRangeData:(id)arg1;

@end
