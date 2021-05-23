/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel, _UIGrabber;

@protocol CKAppGrabberViewDelegate;

@interface CKAppGrabberView : UIView

{
    UIImageView *_iconImageView;
    UIImageView *_iconOutlineView;
    UILabel *_pluginTitleLabel;
    UIButton *_closeButton;
    UIView *_headerView;
    UIView *_grayLine;
    _UIGrabber *_chevronView;
    NSString *_appIdentifier;
    _Bool _showsAppTitle;
    _Bool _roundsTopCorners;
    id <CKAppGrabberViewDelegate> _delegate;
}

@property (weak, nonatomic) id <CKAppGrabberViewDelegate> delegate;
@property (nonatomic) _Bool showsGrabberPill;
@property (nonatomic) _Bool showsAppTitle;
@property (nonatomic, readonly) UIButton *closeButton;
@property (nonatomic) _Bool roundsTopCorners;
@property (nonatomic, readonly) double visualOriginYOffset;
@property (nonatomic, readonly) double chevronMaxYOffset;

+ (double)roundedCornerRadius;
+ (double)compactRoundedCornerRadius;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)headerView;
- (id)iconImageView;
- (void)updateAppTitle:(id)arg1 icon:(id)arg2 appIdentifier:(id)arg3;
- (double)visualOriginYInView:(id)arg1;
- (void)updateHeaderFrame:(_Bool)arg1;
- (void)closeButtonTapped:(id)arg1;
- (void)updateIconImageView:(id)arg1;
- (double)chevronMaxYInView:(id)arg1;

@end
