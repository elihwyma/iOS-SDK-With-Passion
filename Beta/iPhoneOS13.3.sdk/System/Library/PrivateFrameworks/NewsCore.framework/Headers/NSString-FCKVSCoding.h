/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSString.h>

#import <NewsCore/Swift-Protocol.h>

@interface NSString (FCKVSCoding) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct _NSRange range;

+ (id)stringWithValue:(id)arg1;
+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)arg1;
+ (_Bool)fc_string:(id)arg1 isEqualToString:(id)arg2;
+ (id)fc_string:(CDUnknownBlockType)arg1;
+ (id)fc_hardPaywallArticleIDWithArticleID:(id)arg1;

- (id)stringByRemovingCharactersInSet:(id)arg1;
- (void)writeToKeyValuePair:(id)arg1;
- (_Bool)fc_isValidColorHexString;
- (_Bool)fc_isValidArticleID;
- (_Bool)fc_isValidIssueID;
- (_Bool)fc_isValidHardPaywallArticleID;
- (_Bool)fc_isValidTagID;
- (id)fc_stringByTrimmingWhiteSpace;
- (id)fc_stringByReplacingOccurrencesOfStrings:(id)arg1 withString:(id)arg2;
- (id)_FCCKPIdentifierWithType:(int)arg1;
- (id)fc_stringByAppendingStringIfNeeded:(id)arg1;
- (id)fc_lowercaseTokensWithMinimumLength:(unsigned long long)arg1;
- (_Bool)fc_isValidCloudKitID;
- (_Bool)fc_isValidCloudKitIDWithPrefix:(id)arg1;
- (id)tokenizedLowerCaseStringWithMinimumLength:(unsigned long long)arg1;
- (id)fc_stringByRemovingPunctuation;
- (id)fc_stringByReplacingPrefix:(id)arg1 withString:(id)arg2;
- (id)fc_stringByMultiplyingStringByCount:(unsigned long long)arg1;
- (id)fc_stringByPrefixingLinesWithString:(id)arg1;
- (id)fc_numberFollowingString:(id)arg1;
- (unsigned long long)fc_unsignedLongLongValue;

@end
