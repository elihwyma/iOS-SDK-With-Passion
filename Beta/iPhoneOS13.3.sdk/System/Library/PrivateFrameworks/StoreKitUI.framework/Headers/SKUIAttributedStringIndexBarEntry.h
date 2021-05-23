/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIIndexBarEntry.h>

@class NSAttributedString, NSDictionary;

__attribute__((visibility("hidden")))
@interface SKUIAttributedStringIndexBarEntry : SKUIIndexBarEntry

{
    _Bool _hasValidSynthesizedAttributedString;
    NSAttributedString *_synthesizedAttributedString;
    NSAttributedString *_attributedString;
    NSDictionary *_defaultTextAttributes;
}

@property (copy, nonatomic, readonly) NSAttributedString *attributedString;
@property (copy, nonatomic) NSDictionary *defaultTextAttributes;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithAttributedString:(id)arg1;
- (void)_tintColorDidChange;
- (struct CGSize)_calculatedContentSize;
- (void)_drawContentInRect:(struct CGRect)arg1;
- (id)entryAttributedString;
- (id)_synthesizedAttributedString;
- (void)_invalidateSynthesizedAttributedString;

@end
