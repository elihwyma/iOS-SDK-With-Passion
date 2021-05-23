/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIButton.h>

@class NSArray, NSString, UIImageView, UILabel;

@protocol SFLinkPreviewHeaderContentViewDelegate;

__attribute__((visibility("hidden")))
@interface SFLinkPreviewHeaderContentView : UIButton

{
    UILabel *_domainLabel;
    UIButton *_togglePreviewButton;
    UIImageView *_safariIcon;
    NSArray *_domainWithHidePreviewActionConstraints;
    NSArray *_safariIconWithShowPreviewActionConstraints;
    _Bool _previewEnabled;
    id <SFLinkPreviewHeaderContentViewDelegate> _delegate;
    NSString *_domain;
}

@property (weak, nonatomic) id <SFLinkPreviewHeaderContentViewDelegate> delegate;
@property (copy, nonatomic) NSString *domain;
@property (nonatomic, getter=isPreviewEnabled) _Bool previewEnabled;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)_togglePreviewButtonPressed;
- (void)_updateDomainWithHidePreviewActionConstraints;
- (void)_updateSafariIconWithShowPreviewActionConstraints;

@end
