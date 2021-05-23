/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (SLGoogle)

+ (_Bool)SLDuplicateAccountExistsForAccount:(id)arg1 withTypeIdentifier:(id)arg2 andAccountPropertyIDKey:(id)arg3;

- (void)sl_openGoogleAuthenticationSheetForAccount:(id)arg1 shouldConfirm:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sl_openGoogleAuthenticationSheetForAccount:(id)arg1 shouldConfirm:(_Bool)arg2 delegateClassName:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sl_openGoogleAuthenticationSheetWithAccountDescription:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sl_openYouTubeAuthenticationSheetWithAccountDescription:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sl_openYouTubeAuthenticationSheetWithUsername:(id)arg1 accountDescription:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
