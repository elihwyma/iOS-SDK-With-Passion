//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView, UILabel, UIStackView;

@interface AKAuthorizationFirstTimeView : UIView
{
    UIImage *_image;
    UIImage *_title;
    UIImage *_message;
    UIImageView *_imageView;
    UIStackView *_stackView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
}

@property(readonly, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, copy, nonatomic) UIImage *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) UIImage *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) UIImage *image; // @synthesize image=_image;
// - (void).cxx_destruct;
- (id)_iconColor;
- (id)_imageViewWithImage:(id)arg1;
- (id)_verticalStackView;
- (id)_labelWithString:(id)arg1 title:(BOOL)arg2;
- (id)initWithImage:(id)arg1 title:(id)arg2 message:(id)arg3;

@end

