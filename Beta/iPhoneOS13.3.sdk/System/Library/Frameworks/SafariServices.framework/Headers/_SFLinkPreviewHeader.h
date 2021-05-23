/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIView.h>

@class NSString, SFLinkPreviewHeaderContentView, _SFFluidProgressView;

@protocol _SFLinkPreviewHeaderDelegate;

@interface _SFLinkPreviewHeader : UIView

{
    SFLinkPreviewHeaderContentView *_contentView;
    UIView *_hairline;
    _Bool _isMinimumPreviewUI;
    id <_SFLinkPreviewHeaderDelegate> _delegate;
    NSString *_domain;
    _SFFluidProgressView *_progressView;
}

@property (weak, nonatomic) id <_SFLinkPreviewHeaderDelegate> delegate;
@property (copy, nonatomic) NSString *domain;
@property (retain, nonatomic) _SFFluidProgressView *progressView;
@property (nonatomic, getter=isLinkPreviewEnabled) _Bool linkPreviewEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)layoutSubviews;
- (double)defaultHeight;
- (id)initWithMinimumPreviewUI:(_Bool)arg1;
- (void)fluidProgressViewDidShowProgress:(id)arg1;
- (void)fluidProgressViewWillShowProgress:(id)arg1;
- (void)linkPreviewHeaderContentView:(id)arg1 didEnableLinkPreview:(_Bool)arg2;
- (_Bool)linkPreviewEnabled;

@end
