/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSString.h>

@interface NSString (LocalizedFormat)

+ (id)fp_providerDomainIDFromProviderID:(id)arg1 domainIdentifier:(id)arg2;
+ (unsigned long long)fp_maximumBounceLevel;
+ (id)_fpd_pathWithFileSystemRepresentation:(const char *)arg1;
+ (id)fp_pathWithFileSystemRepresentation:(const char *)arg1;
+ (id)fp_representableHFSFileNameWithBase:(id)arg1 suffix:(id)arg2 extension:(id)arg3 makeDotFile:(_Bool)arg4;
+ (id)fp_commonParentPathForItemURLs:(id)arg1;
+ (struct __CFStringTokenizer *)fp_wordTokenizer;
+ (id)fp_defaultProviderDomainID;
+ (id)fpfs_initWithFSEventsFlags:(unsigned int)arg1;
+ (void)setFp_defaultProviderDomainID:(id)arg1;

- (id)fp_obfuscatedFilename;
- (id)fp_libnotifyPerUserNotificationName;
- (id)fp_formatStringWithValues:(id)arg1 error:(id *)arg2;
- (id)fp_localizedFormatWithKeys:(id)arg1 fromDictionary:(id)arg2 error:(id *)arg3;
- (id)fp_fpIdentifier;
- (id)fp_bouncedNameWithIndex:(long long)arg1;
- (id)fp_stringByDeletingPathBounceNo:(id *)arg1 andPathExtension:(id *)arg2;
- (id)fp_toProviderID;
- (id)fp_toDomainIdentifier;
- (id)fp_displayNameFromFilenameWithHiddenPathExtension:(_Bool)arg1 isFolder:(_Bool)arg2;
- (id)fp_representableHFSFileNameWithNumber:(id)arg1 addedExtension:(id)arg2 makeDotFile:(_Bool)arg3;
- (id)fp_prettyPath;
- (id)fp_realpath;
- (id)fp_filenameFromDisplayNameWithExtension:(id)arg1;
- (id)fp_alwaysObfuscatedFilename;
- (id)fp_prettyPathWithObfuscation:(_Bool)arg1;
- (id)fp_stringByDeletingPathExtension;
- (id)fp_pathExtension;
- (id)fp_representableHFSFileNameWithSuffix:(id)arg1 addedExtension:(id)arg2 makeDotFile:(_Bool)arg3;
- (const char *)fp_fileSystemRepresentation;
- (void)fp_enumerateTokensInRange:(struct _NSRange)arg1 tokenizer:(struct __CFStringTokenizer *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)fp_isCJKLanguageIdentifier;
- (id)_fp_escapedStringForSearchQuery;

@end
