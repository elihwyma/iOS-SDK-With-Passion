/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <UIKit/UITableViewCell.h>

@class HKAttributionTextView, NSArray, NSString, UITextView;

@interface HRAtrialFibrillationDataTypeDescriptionCell : UITableViewCell

{
    _Bool _featureAvailable;
    UITextView *_descriptionTextView;
    UITextView *_settingsDescriptionTextView;
    HKAttributionTextView *_settingsLinkTextView;
    NSArray *_availableVerticalConstraints;
    NSArray *_unavailableVerticalConstraints;
}

@property (retain, nonatomic) UITextView *descriptionTextView;
@property (retain, nonatomic) UITextView *settingsDescriptionTextView;
@property (retain, nonatomic) HKAttributionTextView *settingsLinkTextView;
@property (retain, nonatomic) NSArray *availableVerticalConstraints;
@property (retain, nonatomic) NSArray *unavailableVerticalConstraints;
@property (nonatomic) _Bool featureAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)_setupDescriptionTextView;
- (void)_updateTextForDescriptionTextView;

@end
