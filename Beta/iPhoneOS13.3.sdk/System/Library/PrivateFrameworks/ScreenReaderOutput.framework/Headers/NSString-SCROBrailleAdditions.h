/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <Foundation/NSString.h>

@interface NSString (SCROBrailleAdditions)

- (id)_illegalCharacterSet;
- (id)_legalWhiteSpaceSet;
- (struct _NSRange)_rangeIsolatingIllegalCharacters:(struct _NSRange)arg1 forwards:(_Bool)arg2;
- (struct _NSRange)rangeOfWordContainingIndex:(long long)arg1;
- (struct _NSRange)rangeOfWordBeforeWordAtIndex:(long long)arg1;
- (struct _NSRange)rangeOfWordAfterWordAtIndex:(long long)arg1;

@end
