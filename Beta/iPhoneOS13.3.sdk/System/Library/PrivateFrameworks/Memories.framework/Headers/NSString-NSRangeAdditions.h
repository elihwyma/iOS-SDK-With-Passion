/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSString.h>

@interface NSString (NSRangeAdditions)

+ (id)stringFromSeconds:(double)arg1;
+ (id)disarmFilename:(id)arg1;
+ (id)stringFromDuration:(int)arg1 showTenths:(_Bool)arg2 frameRate:(int)arg3 showTimecode:(_Bool)arg4 readable:(_Bool)arg5 useShortReadable:(_Bool)arg6;
+ (id)stringFromDuration:(int)arg1 showTenths:(_Bool)arg2 frameRate:(int)arg3 showTimecode:(_Bool)arg4;
+ (id)stringFromDuration:(int)arg1 showTenths:(_Bool)arg2 frameRate:(int)arg3;
+ (id)shortStyleStringFromDuration:(double)arg1;
+ (id)pathComponents:(id)arg1 firstComponentIndex:(unsigned int)arg2 lastComponentIndex:(unsigned int)arg3;
+ (id)pathComponent:(id)arg1 componentIndex:(unsigned int)arg2;
+ (id)formattedDiskSpace:(double)arg1;
+ (id)stringFromDurationInHoursMinutesAndSeconds:(int)arg1 frameRate:(int)arg2;
+ (id)stringFromDurationInSeconds:(long long)arg1 showTenths:(_Bool)arg2 frameRate:(long long)arg3;
+ (id)stringFromDuration:(int)arg1 showTenths:(_Bool)arg2 frameRate:(int)arg3 readable:(_Bool)arg4;
+ (id)stringFromSeconds:(double)arg1 showTenths:(_Bool)arg2;
+ (id)stringFromSeconds:(double)arg1 showTenths:(_Bool)arg2 readable:(_Bool)arg3;
+ (id)stringFromDuration:(int)arg1 frameRate:(int)arg2;
+ (id)shortStyleStringFromFrameDuration:(long long)arg1;
+ (id)stringFromOSErr:(short)arg1;

- (id)string;
- (struct _NSRange)range;
- (id)fileURL;
- (_Bool)isRTL;
- (id)locationValue;
- (id)stringByRemovingNewlines;
- (id)md5String;
- (_Bool)pathIsInSharedMedia;
- (id)stringByRemovingRedundantWhiteSpace;
- (unsigned int)getTrailingCountWithDelimiter:(id)arg1 range:(struct _NSRange *)arg2;
- (id)stringByChangingWhiteSpaceToSpace;
- (struct _NSRange)rangeOfStringSurroundedBy:(id)arg1 range:(struct _NSRange)arg2;
- (id)stringByIncrementingTrailingCountWithDelimiter:(id)arg1;
- (long long)numericalCaseInsensitiveCompare:(id)arg1;
- (_Bool)isCaseInsensitiveEqualToString:(id)arg1;
- (id)stringByRemovingTrailingOccurrencesOfCharactersInSet:(id)arg1;
- (id)stringByPrefixingPathComponent:(id)arg1;
- (id)stringByRemovingPathPrefix:(id)arg1;
- (id)stringByRemovingSuffix:(id)arg1;
- (id)stringByRemovingSingleCharacterWords;
- (id)stringByReplacingRedundantWhiteSpaceWithSingleSpace;
- (id)stringByDeletingPathExtensionInExtensions:(id)arg1;
- (id)displayablePathString;
- (long long)compareLiteral:(id)arg1;
- (struct _NSRange)rangeOfStringSurroundedBy:(id)arg1;
- (id)rangesOfStringsSurroundedBy:(id)arg1;
- (id)rangesOfString:(id)arg1;
- (id)pathToUseToCheckModDate;
- (id)stringByReplacingWord:(id)arg1 withString:(id)arg2;
- (id)filterErrorDescription;
- (_Bool)containsArabicCharacters;
- (_Bool)containsHebrewCharacters;
- (_Bool)containsRTLScript;
- (id)appendToPathname:(id)arg1;
- (id)stringByReplacingWords:(id)arg1 withString:(id)arg2;
- (struct _NSRange)rangeFromLocation:(unsigned long long)arg1;
- (id)localizedTextForAudioTitle;
- (_Bool)imContainsEmoji;
- (_Bool)imContainsArabic;
- (id)stringByCenterTruncatingToCharCount:(int)arg1;
- (id)_markupEscapedString:(_Bool)arg1;
- (id)propertyListXMLEncodedString;
- (id)htmlEncodedString;
- (id)suitableUTF8_XMLString;
- (struct CGSize)textSizeForMaximumSize:(struct CGSize)arg1 font:(id)arg2 paragraphStyle:(id)arg3;
- (id)widestWordWithFont:(id)arg1;
- (void)parametersToFitInSize:(struct CGSize)arg1 font:(id)arg2 minPointSize:(float)arg3 maxPointSize:(float)arg4 multiLine:(_Bool)arg5 actualFont:(id *)arg6 actualSize:(struct CGSize *)arg7;
- (long long)compareProjectPathModificationDates:(id)arg1;
- (long long)rangeCompare:(id)arg1;
- (unsigned long long)lengthWithComposedCharacters;
- (id)uniquePath;
- (id)stringByReplacingOccurancesOfString:(id)arg1 withString:(id)arg2;
- (id)stringByAbbreviatingAppOrUserSandboxWithTildeInPath;
- (id)stringByRemovingPrefix:(id)arg1;

@end
