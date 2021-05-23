/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIView.h>

@class GKUIContentUnavailableView, NSString, UIActivityIndicatorView, UIStackView;

@interface GKNoContentView : UIView

{
    _Bool _loading;
    CDUnknownBlockType _buttonAction;
    GKUIContentUnavailableView *_contentUnavailableView;
    UIActivityIndicatorView *_loadingIndicatorView;
    UIStackView *_stackView;
}

@property (retain, nonatomic) GKUIContentUnavailableView *contentUnavailableView;
@property (retain, nonatomic) UIActivityIndicatorView *loadingIndicatorView;
@property (retain, nonatomic) UIStackView *stackView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) CDUnknownBlockType buttonAction;
@property (nonatomic, getter=isLoading) _Bool loading;

- (id)initWithFrame:(struct CGRect)arg1;

@end
