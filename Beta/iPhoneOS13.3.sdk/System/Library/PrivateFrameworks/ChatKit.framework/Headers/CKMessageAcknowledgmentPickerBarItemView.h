/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class CKAcknowledgmentGlyphView, CKMessageAcknowledgmentDraftDescriptor, UIButton;

@protocol CKMessageAcknowledgmentPickerBarItemViewDelegate;

__attribute__((visibility("hidden")))
@interface CKMessageAcknowledgmentPickerBarItemView : UIView

{
    _Bool _selected;
    long long _messageAcknowledgmentType;
    id <CKMessageAcknowledgmentPickerBarItemViewDelegate> _delegate;
    CKAcknowledgmentGlyphView *_acknowledgmentGlyphView;
    UIButton *_itemButton;
    CKMessageAcknowledgmentDraftDescriptor *_draft;
}

@property (retain, nonatomic) UIButton *itemButton;
@property (nonatomic, readonly) _Bool displaySelected;
@property (weak, nonatomic) id <CKMessageAcknowledgmentPickerBarItemViewDelegate> delegate;
@property (nonatomic, getter=isSelected) _Bool selected;
@property (nonatomic, readonly) CKAcknowledgmentGlyphView *acknowledgmentGlyphView;
@property (nonatomic, readonly) CKMessageAcknowledgmentDraftDescriptor *draft;
@property (nonatomic, readonly) long long messageAcknowledgmentType;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)itemButtonTapped:(id)arg1;
- (void)configureWithMessageAcknowledgmentDescriptor:(id)arg1 initiallySelected:(_Bool)arg2;

@end
