/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class CKMediaObject, NSString, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface CKAttachmentView : UIView

{
    CKMediaObject *_mediaObject;
    UIImageView *_iconImageView;
    UILabel *_actionLabel;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *actionLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) CKMediaObject *mediaObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)title;
- (void)setTitle:(id)arg1;
- (void)prepareForReuse;
- (id)action;
- (id)subtitle;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setSubtitle:(id)arg1;
- (id)icon;
- (void)setAction:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)prepareForDisplay;
- (void)configureIconImageView:(_Bool)arg1;

@end
