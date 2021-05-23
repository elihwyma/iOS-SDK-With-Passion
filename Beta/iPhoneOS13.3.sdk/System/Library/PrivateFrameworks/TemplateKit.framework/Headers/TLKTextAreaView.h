/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

#import <TemplateKit/TLKStackView.h>

@class NSMutableArray, NSString, NUIContainerStackView, TLKRichTextField, TLKTextButton, TLKTitleContainerView;

@protocol TLKTextAreaViewDelegate;

@interface TLKTextAreaView : TLKStackView

{
    _Bool _disableAllObservers;
    id <TLKTextAreaViewDelegate> _buttonDelegate;
    TLKTitleContainerView *_titleContainer;
    NSMutableArray *_detailsFields;
    TLKRichTextField *_footnoteLabel;
    TLKTextButton *_footnoteButton;
    NUIContainerStackView *_footnoteContainer;
}

@property (retain, nonatomic) TLKTitleContainerView *titleContainer;
@property (retain, nonatomic) NSMutableArray *detailsFields;
@property (retain, nonatomic) TLKRichTextField *footnoteLabel;
@property (retain, nonatomic) TLKTextButton *footnoteButton;
@property (retain, nonatomic) NUIContainerStackView *footnoteContainer;
@property (nonatomic) _Bool disableAllObservers;
@property (weak) id <TLKTextAreaViewDelegate> buttonDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)footNoteLabelFont;

- (id)init;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (id)titleView;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (id)detailsViews;
- (void)updateResultWithTitle:(id)arg1 secondaryTitle:(id)arg2 image:(id)arg3 detached:(_Bool)arg4;
- (void)updateDetails:(id)arg1;
- (void)updateFootnote:(id)arg1 buttonText:(id)arg2;
- (id)textAreaLabelStrings;
- (id)footnoteLabelString;
- (id)titleLabelString;
- (id)secondaryTitleLabelString;
- (void)internalTextFieldsInBatchUpdate:(_Bool)arg1;
- (_Bool)noRichTextFields;
- (_Bool)noFootNote;

@end
