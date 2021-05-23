/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSScanner.h>

@interface NSScanner (MFMessageBodyHTMLParserExtras)

- (_Bool)mf_scanUpToRegularExpression:(id)arg1;
- (struct _NSRange)_rangeOfFirstMatchWithRegularExpression:(id)arg1;
- (id)mf_remainingString;

@end
