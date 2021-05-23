/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <UIKit/UIView.h>

@class MCDLabelButton, MCDTitleView, NSString, UILabel, UIStackView;

@interface MCDSongDetailsView : UIView

{
    _Bool _isCompactHeight;
    unsigned long long _fontStyle;
    MCDTitleView *_titleView;
    UILabel *_artistLabel;
    MCDLabelButton *_albumArtistLabelButton;
    NSString *_trackTitle;
    NSString *_albumTitle;
    NSString *_artistName;
    UIStackView *_stackView;
    struct CGRect _infoRect;
}

@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) struct CGRect infoRect;
@property (nonatomic) _Bool isCompactHeight;
@property (nonatomic) unsigned long long fontStyle;
@property (nonatomic, readonly) MCDTitleView *titleView;
@property (retain, nonatomic) UILabel *artistLabel;
@property (nonatomic, readonly) MCDLabelButton *albumArtistLabelButton;
@property (retain, nonatomic) NSString *trackTitle;
@property (retain, nonatomic) NSString *albumTitle;
@property (retain, nonatomic) NSString *artistName;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (double)_preferredHeight;
- (void)_updateFont;
- (void)_updateNumberOfLines;

@end
