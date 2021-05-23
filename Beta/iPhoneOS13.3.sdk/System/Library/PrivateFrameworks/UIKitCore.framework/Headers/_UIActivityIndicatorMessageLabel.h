/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UILabel.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _UIActivityIndicatorMessageLabel : UILabel

{
    NSDictionary *_regularTextAttributes;
    NSDictionary *_effectiveTextAttributes;
}

@property (copy, nonatomic) NSDictionary *regularTextAttributes;
@property (copy, nonatomic, readonly) NSDictionary *effectiveTextAttributes;
@property (nonatomic, readonly) double verticalSpacingToSpinner;

+ (id)defaultRegularContentSizeTextAttributes;

- (void)setText:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (id)initWithRegularTextAttributes:(id)arg1;
- (void)_ensureCapableOfCalculatingBaselineOffsets;
- (double)_effectiveVerticalSpacingToSpinner;
- (id)_validatedAttributedString:(id)arg1;
- (id)_effectiveAttributesDerivedFromRegularTextAttributes:(id)arg1;
- (void)setEffectiveTextAttributes:(id)arg1;

@end
