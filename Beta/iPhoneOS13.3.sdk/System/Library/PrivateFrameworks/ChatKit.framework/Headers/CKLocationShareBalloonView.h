/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKImageBalloonView.h>

@class NSString, UIButton, UIImageView, UILabel, UIView;

@protocol CKLocationShareBalloonViewDelegate;

@interface CKLocationShareBalloonView : CKImageBalloonView

{
    long long _offerState;
    NSString *_titleString;
    NSString *_locationString;
    UILabel *_titleLabel;
    UILabel *_locationLabel;
    UIButton *_startSharingButton;
    UIButton *_ignoreButton;
    UIView *_horizontalSeparator;
    UIView *_verticalSeparator;
    UIImageView *_chevron;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *locationLabel;
@property (retain, nonatomic) UIButton *startSharingButton;
@property (retain, nonatomic) UIButton *ignoreButton;
@property (retain, nonatomic) UIView *horizontalSeparator;
@property (retain, nonatomic) UIView *verticalSeparator;
@property (retain, nonatomic) UIImageView *chevron;
@property (weak, nonatomic) id <CKLocationShareBalloonViewDelegate> delegate;
@property (nonatomic) long long offerState;
@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) NSString *locationString;

- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForDisplay;
- (void)configureForLocationShareOfferChatItem:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;
- (void)_shareButtonHit:(id)arg1;
- (void)_ignoreButtonHit:(id)arg1;

@end
