/*
 Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
 */

#import <Foundation/NSString.h>

@interface NSString (CoreRecentsUtilities)

- (struct _NSRange)cr_rangeOfAddressDomain;
- (id)cr_copyStringByDecodingIDNAInRange:(struct _NSRange)arg1;
- (id)cr_copyStringByEncodingIDNAInRange:(struct _NSRange)arg1;
- (id)cr_copyIDNADecodedEmailAddress;
- (id)cr_copyIDNAEncodedEmailAddress;
- (id)cr_uniqueFilenameWithRespectToFilenames:(id)arg1;
- (id)cr_lowercaseStringWithStandardLocale;

@end
