/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <UIViewController.h>

@class NSString, SiriUICarDNDContextProvider, UIImageView, UILabel;

@protocol SiriUICarDNDDelegate;

@interface SiriUICarDNDUseSiriHeaderViewController : UIViewController

{
    _Bool _localizedSubtitleDisplayedAboveTitle;
    id <SiriUICarDNDDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    NSString *_localizedTitle;
    NSString *_localizedSubtitle;
    UIImageView *_siriOrbImageView;
    SiriUICarDNDContextProvider *_contextProvider;
}

@property (retain, nonatomic, getter=_titleLabel, setter=_setTitleLabel:) UILabel *titleLabel;
@property (retain, nonatomic, getter=_subtitleLabel, setter=_setSubtitleLabel:) UILabel *subtitleLabel;
@property (retain, nonatomic, getter=_localizedTitle, setter=_setLocalizedTitle:) NSString *localizedTitle;
@property (retain, nonatomic, getter=_localizedSubtitle, setter=_setLocalizedSubtitle:) NSString *localizedSubtitle;
@property (retain, nonatomic, getter=_siriOrbImageView, setter=_setSiriOrbImageView:) UIImageView *siriOrbImageView;
@property (retain, nonatomic, getter=_contextProvider, setter=_setContextProvider:) SiriUICarDNDContextProvider *contextProvider;
@property (weak, nonatomic) id <SiriUICarDNDDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)shouldShowCarDNDUseSiriHeaderViewController;

- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_setupImageView;
- (void)_setupView;
- (void)_setupTitleLabel;
- (void)contextProvided:(id)arg1;
- (id)_hintContext;
- (void)_setupSubtitleLabel;
- (void)_setupTitleAndSubtitleConstraints;
- (void)_addContextProvider;
- (void)_sendCardAppearedAnalyticsEvent;
- (void)_removeContextProvider;

@end
