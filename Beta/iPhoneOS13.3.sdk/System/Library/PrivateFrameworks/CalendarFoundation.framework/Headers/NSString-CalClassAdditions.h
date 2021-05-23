/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSString.h>

@interface NSString (CalClassAdditions)

+ (id)stringWithFileSystemRepresentation:(const char *)arg1;
+ (id)ellipsisString;
+ (id)stringWithContentsOfFile:(id)arg1 usingEncoding:(unsigned long long)arg2;

- (_Bool)isPhoneNumber;
- (id)stringByRemovingCharactersInSet:(id)arg1;
- (_Bool)hasMailto;
- (id)stringRemovingMailto;
- (_Bool)hasTel;
- (id)stringRemovingTel;
- (id)quote;
- (_Bool)hasPrefixCaseInsensitive:(id)arg1;
- (_Bool)resemblesEmailAddress;
- (id)_phoneNumberDetector;
- (id)appendSlashIfNeeded;
- (id)stringByURLUnquoting;
- (id)trimFirstChar:(unsigned short)arg1;
- (id)trimFinalChar:(unsigned short)arg1;
- (id)trimFirstComma;
- (id)trimFinalComma;
- (id)stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)stringByURLQuoting;
- (id)stringByURLQuotingPaths;
- (id)stringByURLEscapingAllReservedCharacters;
- (id)stringByURLUnescapingAllReservedCharacters;
- (id)stringByRemovingLastPathComponent;
- (_Bool)hasPrefixCaseAndDiacriticInsensitive:(id)arg1;
- (_Bool)hasSuffixCaseInsensitive:(id)arg1;
- (_Bool)containsCaseInsensitive:(id)arg1;
- (_Bool)containsCaseAndDiacriticInsensitive:(id)arg1;
- (_Bool)isEqualToStringCaseInsensitive:(id)arg1;
- (id)userFromEmail;
- (id)hostFromEmail;
- (id)stringAddingMailto;
- (id)stringAddingTel;
- (_Bool)isMailURL;
- (_Bool)isAddressBookURL;
- (_Bool)isMessagesURL;
- (id)radarLink;
- (id)phoneURL;
- (id)CalUncommentedAddress;
- (id)CalAddressComment;
- (_Bool)isEqualAsURL:(id)arg1;
- (id)directionalityIsolatedString;
- (id)stringByEncodingSlashes;
- (id)stringByDecodingSlashes;
- (void)cal_enumerateCharactersUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)isPathToAppleScript;
- (_Bool)isPathToVCalData;
- (_Bool)isPathToICalData;
- (_Bool)isPathToBackupFile;
- (_Bool)isPathToICalBookmark;
- (_Bool)isPathToICalTruthFile;
- (id)trimChar:(unsigned short)arg1;
- (id)trimCommas;
- (id)trimWhiteSpace;
- (id)unquote;
- (id)searchAndReplaceString:(id)arg1 withString:(id)arg2;
- (id)safeFilename;
- (id)removeSlashIfNeeded;
- (id)CalSafeHFSPathComponentName;
- (id)stringByTrimmingWhitespaceAndRemovingNewlines;
- (id)stringByRemovingPrefixCaseInsensitive:(id)arg1;
- (id)stringByExpandingTildeToNonSandboxHome;

@end
