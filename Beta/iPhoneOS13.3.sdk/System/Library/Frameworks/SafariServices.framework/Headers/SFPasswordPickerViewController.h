/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UINavigationController.h>

@class NSString, _ASIncomingCallObserver, _SFPasswordPickerTableViewController;

__attribute__((visibility("hidden")))
@interface SFPasswordPickerViewController : UINavigationController

{
    CDUnknownBlockType _completionHandler;
    _SFPasswordPickerTableViewController *_passwordPickerTableViewController;
    _ASIncomingCallObserver *_callObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_preventsAppearanceProxyCustomization;

- (void)dealloc;
- (void)_dismiss;
- (void)_appDidEnterBackground:(id)arg1;
- (id)initWithPrompt:(id)arg1 forUserNamesOnly:(_Bool)arg2 appNames:(id)arg3 appID:(id)arg4 matchedSites:(id)arg5 urlString:(id)arg6 minimumNumberOfCredentialsToShowLikelyMatchesSection:(unsigned long long)arg7 shouldShowIcons:(_Bool)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (void)passwordPickerTableViewControllerDidCancel:(id)arg1;
- (void)passwordPickerTableViewController:(id)arg1 didPickSavedPassword:(id)arg2;

@end
