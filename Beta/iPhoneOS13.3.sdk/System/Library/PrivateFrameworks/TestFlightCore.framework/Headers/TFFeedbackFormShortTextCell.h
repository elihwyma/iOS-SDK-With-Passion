/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <TestFlightCore/TFFeedbackFormBaseCell.h>

@class NSString, TFFeedbackEntryShortText, UITextField;

__attribute__((visibility("hidden")))
@interface TFFeedbackFormShortTextCell : TFFeedbackFormBaseCell

{
    UITextField *_textField;
    TFFeedbackEntryShortText *_shortTextEntry;
}

@property (nonatomic, readonly) UITextField *textField;
@property (retain, nonatomic) TFFeedbackEntryShortText *shortTextEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct CGSize)sizeForEntry:(id)arg1 dataSource:(id)arg2 fittingSize:(struct CGSize)arg3 inTraitEnvironment:(id)arg4;
+ (struct UIEdgeInsets)_textFieldInsetsInTraitEnvironment:(id)arg1;
+ (struct CGSize)_sizeToFitText:(id)arg1 fittingSize:(struct CGSize)arg2 inTraitEnvironment:(id)arg3;
+ (id)_createTextFieldFontWithTraitCollection:(id)arg1;

- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;
- (unsigned long long)displayableDataType;
- (void)setDisplayedDataString:(id)arg1;
- (void)applyContentsOfEntry:(id)arg1;
- (void)_prepareForDisplayWithTraitCollection:(id)arg1;
- (void)_configureTextFieldForContentType:(unsigned long long)arg1;

@end
