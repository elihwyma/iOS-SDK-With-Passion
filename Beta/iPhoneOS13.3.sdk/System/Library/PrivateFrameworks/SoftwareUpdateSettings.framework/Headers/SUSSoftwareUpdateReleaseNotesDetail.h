/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateSettings.framework/SoftwareUpdateSettings
 */

#import <Preferences/PSListController.h>

@class NSString;

@interface SUSSoftwareUpdateReleaseNotesDetail : PSListController

{
    NSString *_releaseNotes;
}

@property (retain, nonatomic) NSString *releaseNotes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)loadView;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)specifiers;

@end
