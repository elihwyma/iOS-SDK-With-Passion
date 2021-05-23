/*
 Image: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
 */

#import <Preferences/PSFooterHyperlinkView.h>

@protocol SiriAppsFooterViewDelegate;

@interface SiriAppsFooterView : PSFooterHyperlinkView

{
    id <SiriAppsFooterViewDelegate> _delegate;
}

@property (weak, nonatomic) id <SiriAppsFooterViewDelegate> delegate;

- (id)initWithSpecifier:(id)arg1;
- (void)didTapLearnMore:(id)arg1;

@end
