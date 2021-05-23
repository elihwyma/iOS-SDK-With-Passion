/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <UIKit/UIViewController.h>

#import <SearchUI/Swift-Protocol.h>

@class NSString;

@protocol SearchUIFirstTimeExperienceDelegate;

@interface SearchUIFirstTimeExperienceViewController : UIViewController <Swift>

{
    id <SearchUIFirstTimeExperienceDelegate> _delegate;
    unsigned long long _supportedDomains;
    NSString *_explanationText;
    NSString *_learnMoreText;
    NSString *_continueButtonTitle;
    NSString *_bundleIdentifier;
}

@property (nonatomic) unsigned long long supportedDomains;
@property (retain, nonatomic) NSString *explanationText;
@property (retain, nonatomic) NSString *learnMoreText;
@property (retain, nonatomic) NSString *continueButtonTitle;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (weak, nonatomic) id <SearchUIFirstTimeExperienceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)_canShowWhileLocked;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)showPrivacyView;
- (id)initWithSupportedDomains:(unsigned long long)arg1 explanationText:(id)arg2 learnMoreText:(id)arg3 continueButtonTitle:(id)arg4;
- (void)makeViews;
- (void)continueButtonPressed;
- (id)initWithStyle:(unsigned long long)arg1 supportedDomains:(unsigned long long)arg2 explanationText:(id)arg3 learnMoreText:(id)arg4 continueButtonTitle:(id)arg5;

@end
