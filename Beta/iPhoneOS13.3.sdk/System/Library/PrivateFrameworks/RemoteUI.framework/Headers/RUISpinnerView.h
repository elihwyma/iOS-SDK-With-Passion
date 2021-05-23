/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class RUIFooterElement, RUIHeaderElement, RUIHeaderView, RUIObjectModel, RemoteUISectionFooter, UIActivityIndicatorView, UIColor, UILabel, UIView;

@interface RUISpinnerView

{
    UIView *_view;
    UIActivityIndicatorView *_spinner;
    UILabel *_label;
    RUIHeaderView *_headerView;
    RemoteUISectionFooter *_footerView;
    RUIObjectModel *_objectModel;
    UIColor *_spinnerColor;
    RUIHeaderElement *_header;
    RUIFooterElement *_footer;
}

@property (weak, nonatomic) RUIObjectModel *objectModel;
@property (retain, nonatomic) UIColor *spinnerColor;
@property (retain, nonatomic) RUIHeaderElement *header;
@property (retain, nonatomic) RUIFooterElement *footer;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)spinnerView;
- (void)viewDidLayout;

@end
