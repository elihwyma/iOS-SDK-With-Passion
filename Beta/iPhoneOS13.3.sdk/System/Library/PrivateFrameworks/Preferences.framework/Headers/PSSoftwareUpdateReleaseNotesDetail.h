/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString;

@interface PSSoftwareUpdateReleaseNotesDetail

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
