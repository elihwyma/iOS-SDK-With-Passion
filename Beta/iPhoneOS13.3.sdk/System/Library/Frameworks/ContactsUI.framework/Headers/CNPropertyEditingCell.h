/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertyCell.h>

@class CNRepeatingGradientSeparatorView, NSString, UIButton;

__attribute__((visibility("hidden")))
@interface CNPropertyEditingCell : CNPropertyCell

{
    UIButton *_labelButton;
    CNRepeatingGradientSeparatorView *_vseparator;
}

@property (retain, nonatomic) CNRepeatingGradientSeparatorView *vseparator;
@property (nonatomic, readonly) UIButton *labelButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)wantsChevron;
+ (_Bool)wantsStandardConstraints;

- (void)dealloc;
- (id)valueString;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)labelView;
- (id)variableConstraints;
- (double)minCellHeight;
- (id)constantConstraints;
- (void)picker:(id)arg1 didDeleteItem:(id)arg2;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)pickerDidCancel:(id)arg1;
- (void)setValueTextAttributes:(id)arg1;
- (void)updateWithPropertyItem:(id)arg1;
- (void)labelButtonClicked:(id)arg1;
- (double)leftValueMargin;
- (double)effectiveLabelWidth;
- (void)setVseparatorHidden:(_Bool)arg1;
- (void)regainFocus;

@end
