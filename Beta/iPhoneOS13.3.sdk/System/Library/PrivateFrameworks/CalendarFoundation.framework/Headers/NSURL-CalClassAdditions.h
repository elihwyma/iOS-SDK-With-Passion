/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSURL.h>

@interface NSURL (CalClassAdditions)

+ (id)_URLForAddress:(id)arg1 scheme:(id)arg2 noAddress:(id)arg3;
+ (_Bool)_isValidURI:(id)arg1;
+ (id)URLWithContactIdentifier:(id)arg1;
+ (id)davCompatibleFilenameForFilename:(id)arg1;
+ (id)URLForMail:(id)arg1;
+ (id)URLForTel:(id)arg1;
+ (id)URLForNoMail;
+ (id)URLForNoTel;

- (_Bool)isEqualToURL:(id)arg1;
- (id)queryParameters;
- (_Bool)cal_hasSchemeTel;
- (_Bool)cal_hasSchemeMailto;
- (id)serverURL;
- (id)initWithCalDirtyString:(id)arg1;
- (_Bool)compareToLocalURL:(id)arg1;
- (id)hostWithoutWWW;
- (_Bool)cal_caseInsensitiveHasScheme:(id)arg1;
- (id)cal_resourceSpecifierNoLeadingSlashes;
- (_Bool)_hasDescription:(id)arg1;
- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;
- (id)initWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 path:(id)arg4;
- (id)pathWithoutTrailingRemovingSlash;
- (id)pathDecodedAndWithoutTrailingSlashRemoved;
- (id)unquotedPassword;
- (_Bool)isOnRemoteFileSystem;
- (_Bool)compareToLocalString:(id)arg1;
- (_Bool)isEqualToURLIgnoringScheme:(id)arg1;
- (id)cal_emailAddressString;
- (id)cal_phoneNumberString;
- (_Bool)cal_isEquivalentToEmailAddress:(id)arg1;
- (_Bool)cal_isEquivalentToPhoneNumber:(id)arg1;
- (_Bool)isNoMail;
- (_Bool)isNoTel;

@end
