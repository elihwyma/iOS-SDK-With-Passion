/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSString.h>

@interface NSString (FormatFlowedSupportInternal)

+ (id)mf_stringFromMimeRichTextString:(id)arg1 asHTML:(_Bool)arg2;
+ (id)mf_stringFromMimeEnrichedString:(id)arg1 asHTML:(_Bool)arg2;
+ (id)mf_messageIDStringWithDomainHint:(id)arg1;
+ (id)mf_stringForMimeTypeFromFileName:(id)arg1;
+ (id)mf_stringRepresentationForBytes:(long long)arg1;
+ (id)mf_stringWithAttachmentCharacter;
+ (id)mf_UUID;

- (id)mf_stringWithNoExtraSpaces;
- (id)mf_betterStringByResolvingSymlinksInPath;
- (unsigned long long)mf_lineBreakBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange)arg2;
- (unsigned long long)mf_nextWordFromIndex:(unsigned long long)arg1 forward:(_Bool)arg2;
- (id)mf_convertFromFlowedText:(unsigned int)arg1 visuallyEmpty:(_Bool *)arg2;
- (_Bool)mf_isSubdirectoryOfPath:(id)arg1;
- (id)mf_stringByExpandingTildeWithSharedResourcesDirectoryInPath;
- (id)mf_stringByReallyAbbreviatingSharedResourcesDirectoryWithTildeInPath;
- (_Bool)mf_makeDirectoryWithMode:(int)arg1;
- (id)mf_prefixToString:(id)arg1;
- (id)mf_uniqueFilenameWithRespectToFilenames:(id)arg1;
- (id)mf_canonicalizedAbsolutePath;
- (_Bool)mf_containsSubstring:(id)arg1 options:(unsigned long long)arg2;
- (id)mf_fileSystemString;
- (id)mf_stringByEscapingHTMLCodes;
- (_Bool)mf_containsSubstring:(id)arg1;
- (id)mf_stringByTrimmingWhitespaceAndNewlineCharacters;
- (id)mf_stringByAbbreviatingSharedResourcesDirectoryWithTildeInPath;
- (id)mf_stringByLocalizingReOrFwdPrefix;
- (_Bool)mf_caseInsensitiveIsEqualToString:(id)arg1;
- (id)mf_stringByEscapingForXML;

@end
