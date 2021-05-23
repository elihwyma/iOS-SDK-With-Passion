/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSString.h>

@interface NSString (WFFilenameUtilities)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *wfName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)wf_stringWithData:(id)arg1;
+ (id)wf_datedFilenameWithTypeString:(id)arg1 fileExtension:(id)arg2;

- (id)wf_filenameTruncatedToMaximumLengthWithSuffix:(id)arg1;
- (id)wf_filenameTruncatedToMaximumLength;
- (id)gtm_stringByEscapingHTMLUsingTable:(CDStruct_6a59ab51 *)arg1 ofSize:(unsigned long long)arg2 escapingUnicode:(_Bool)arg3;
- (id)gtm_stringByEscapingForHTML;
- (id)gtm_stringByEscapingForAsciiHTML;
- (id)gtm_stringByUnescapingFromHTML;
- (id)wf_stringByTrimmingLeadingCharactersInSet:(id)arg1;
- (id)wf_stringByTrimmingTrailingCharactersInSet:(id)arg1;
- (id)wf_stringByTrimmingLeadingWhitespaceAndNewlineCharacters;
- (id)wf_stringByTrimmingTrailingWhitespaceAndNewlineCharacters;

@end
