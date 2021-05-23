/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@interface SUScriptAccessSecurity : NSObject

- (_Bool)canAccessTelephonyInFrame:(id)arg1 error:(id *)arg2;
- (_Bool)canAccessFacebookWithURL:(id)arg1 inFrame:(id)arg2 error:(id *)arg3;
- (_Bool)_canAccessType:(id)arg1 inFrame:(id)arg2 error:(id *)arg3;
- (_Bool)_canAccessType:(id)arg1 withURL:(id)arg2 inFrame:(id)arg3 error:(id *)arg4;
- (id)_accessDictionaryForType:(id)arg1;
- (id)_copyResourceURLsForWebFrame:(id)arg1;
- (_Bool)_urls:(id)arg1 matchPatternStrings:(id)arg2;
- (_Bool)_url:(id)arg1 matchesExpressions:(id)arg2;
- (_Bool)canAccessFacebookInFrame:(id)arg1 error:(id *)arg2;

@end
