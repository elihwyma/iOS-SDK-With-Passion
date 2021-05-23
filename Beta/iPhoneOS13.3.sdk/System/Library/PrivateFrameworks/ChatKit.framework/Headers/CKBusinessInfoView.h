/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;

@protocol CKBusinessInfoViewDelegate;

__attribute__((visibility("hidden")))
@interface CKBusinessInfoView : UIView

{
    id <CKBusinessInfoViewDelegate> _delegate;
    NSString *_descriptionText;
    long long _layoutType;
    UILabel *_descriptionTextLabel;
    UIButton *_infoButton;
}

@property (nonatomic) long long layoutType;
@property (retain, nonatomic) UILabel *descriptionTextLabel;
@property (retain, nonatomic) UIButton *infoButton;
@property (weak, nonatomic) id <CKBusinessInfoViewDelegate> delegate;
@property (retain, nonatomic) NSString *descriptionText;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithLayoutType:(long long)arg1;
- (void)infoButtonTapped:(id)arg1;

@end
