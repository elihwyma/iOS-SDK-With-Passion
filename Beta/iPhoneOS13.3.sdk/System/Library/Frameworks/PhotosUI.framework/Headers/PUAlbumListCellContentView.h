/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class NSString, PUSharedAlbumAvatarView, PUStackView, PXUIButton, UIFont, UILabel, UITextField;

@protocol PUAlbumListCellDelegate;

@interface PUAlbumListCellContentView : UIView

{
    _Bool _combinesPhotoDecorations;
    _Bool _topInsetEnabled;
    _Bool _showsAvatarView;
    _Bool _editing;
    _Bool _enabled;
    _Bool _showsDeleteButtonWhenEditing;
    _Bool _highlighted;
    _Bool __showsTitleAndSubtitle;
    _Bool _usesLabelForTitle;
    id <PUAlbumListCellDelegate> _delegate;
    PUStackView *_stackView;
    PUSharedAlbumAvatarView *_avatarView;
    UIView *_customImageView;
    NSString *_title;
    NSString *_subtitle;
    double _xInset;
    long long _layout;
    unsigned long long _editCapabilities;
    UIFont *_titleFont;
    UIFont *_subtitleFont;
    UITextField *__titleTextField;
    UILabel *__titleLabel;
    UILabel *__subtitleLabel;
    PXUIButton *__deleteButton;
}

@property (retain, nonatomic, setter=_setStackView:) PUStackView *stackView;
@property (retain, nonatomic) PUSharedAlbumAvatarView *avatarView;
@property (nonatomic, setter=_setShowsTitleAndSubtitle:) _Bool _showsTitleAndSubtitle;
@property (retain, nonatomic, setter=_setTitleTextField:) UITextField *_titleTextField;
@property (retain, nonatomic, setter=_setTitleLabel:) UILabel *_titleLabel;
@property (retain, nonatomic, setter=_setSubtitleLabel:) UILabel *_subtitleLabel;
@property (retain, nonatomic, setter=_setDeleteButton:) PXUIButton *_deleteButton;
@property (nonatomic) _Bool usesLabelForTitle;
@property (weak, nonatomic) id <PUAlbumListCellDelegate> delegate;
@property (nonatomic, readonly) UIView *springLoadingTargetView;
@property (nonatomic) _Bool combinesPhotoDecorations;
@property (nonatomic) _Bool topInsetEnabled;
@property (nonatomic) _Bool showsAvatarView;
@property (retain, nonatomic) UIView *customImageView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) double xInset;
@property (nonatomic) long long layout;
@property (nonatomic) unsigned long long editCapabilities;
@property (nonatomic, getter=isEditing) _Bool editing;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic) _Bool showsDeleteButtonWhenEditing;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *subtitleFont;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)setSubtitle:(id)arg1 animated:(_Bool)arg2;
- (void)_updateAvatarView;
- (void)_deleteAction:(id)arg1;
- (void)handleLabelTap:(id)arg1;
- (void)_updateSubviewOrdering;
- (struct CGPoint)_deleteButtonCenter;
- (void)setShowsTitle:(_Bool)arg1 animated:(_Bool)arg2;
- (void)handleTransitionFade:(_Bool)arg1 animate:(_Bool)arg2;
- (void)setEditCapabilities:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_updateDeleteButtonAnimated:(_Bool)arg1;
- (void)_updateStackViewAnimated:(_Bool)arg1;
- (long long)_titleTextFieldClearButtonModeForLayout:(long long)arg1;
- (double)_titleFieldAlpha;
- (void)_updateTitleFieldAnimated:(_Bool)arg1;
- (void)_updateSubtitleLabelAnimated:(_Bool)arg1;
- (void)cancelPerformRetitleAction;
- (void)_updateTitleStyle;
- (void)_updateSubtitleLabelStyle;

@end
