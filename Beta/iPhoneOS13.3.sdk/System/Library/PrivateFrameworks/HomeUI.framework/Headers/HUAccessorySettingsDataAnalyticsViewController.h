/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUAccessorySettingsDetailsViewController.h>

@class NSString, UIView;

@interface HUAccessorySettingsDataAnalyticsViewController : HUAccessorySettingsDetailsViewController

{
    UIView *_linkFooterView;
}

@property (nonatomic, readonly) UIView *linkFooterView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)dismissPrivacyController;

@end
