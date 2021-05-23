/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface CKMessageEntryAudioHintView : UIView

{
    UIButton *_referenceButton;
    UILabel *_hintLabel;
    UIImageView *_hintImageView;
    UIButton *_hintButton;
    struct UIEdgeInsets _coverInsets;
}

@property (retain, nonatomic) UIButton *referenceButton;
@property (nonatomic) struct UIEdgeInsets coverInsets;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIImageView *hintImageView;
@property (retain, nonatomic) UIButton *hintButton;

- (void)layoutSubviews;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithReferenceButton:(id)arg1 coverInsets:(struct UIEdgeInsets)arg2;

@end
