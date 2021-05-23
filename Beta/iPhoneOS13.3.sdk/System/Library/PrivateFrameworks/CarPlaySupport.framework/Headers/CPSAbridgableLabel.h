/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <UIKit/UILabel.h>

@class NSArray;

@interface CPSAbridgableLabel : UILabel

{
    NSArray *_textVariants;
    NSArray *_attributedTextVariants;
    unsigned long long _variantsIndex;
}

@property (nonatomic) unsigned long long variantsIndex;
@property (copy, nonatomic) NSArray *textVariants;
@property (copy, nonatomic) NSArray *attributedTextVariants;

+ (id)sanitizedTextForText:(id)arg1;

- (id)init;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_updateVariant;
- (id)sanitizedAttributedStringForString:(id)arg1;
- (id)_variantsList;
- (unsigned long long)_numberOfVariants;
- (long long)_compareBoundsSizeToLayoutSizeForString:(id)arg1;

@end
