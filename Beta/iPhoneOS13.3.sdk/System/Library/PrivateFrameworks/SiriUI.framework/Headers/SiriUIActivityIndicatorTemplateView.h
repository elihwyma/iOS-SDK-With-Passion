/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUIBaseTemplateView.h>

@class NSString, UIActivityIndicatorView, UILabel;

@protocol SiriUIActivityIndicatorTemplateModel, SiriUITemplatedView;

@interface SiriUIActivityIndicatorTemplateView : SiriUIBaseTemplateView

{
    UILabel *_detailTextLabel;
    UIActivityIndicatorView *_spinnerView;
}

@property (retain, nonatomic) UILabel *detailTextLabel;
@property (retain, nonatomic) UIActivityIndicatorView *spinnerView;
@property (weak, nonatomic) id <SiriUIActivityIndicatorTemplateModel> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SiriUITemplatedView> templatedSuperview;

- (id)initWithDataSource:(id)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (double)desiredHeight;

@end
