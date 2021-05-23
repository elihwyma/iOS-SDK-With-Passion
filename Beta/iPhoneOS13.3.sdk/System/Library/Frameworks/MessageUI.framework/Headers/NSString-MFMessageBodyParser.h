/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSString.h>

@interface NSString (MFMessageBodyParser)

+ (id)mf_commaSeparatedRecipientListWithRecipientCount:(unsigned long long)arg1 prefixForRecipientAtIndex:(CDUnknownBlockType)arg2 stringForRecipientAtIndex:(CDUnknownBlockType)arg3 lengthValidationBlock:(CDUnknownBlockType)arg4;

- (id)mf_substringTruncatedInRange:(struct _NSRange)arg1;
- (id)mf_substringTruncatedToIndex:(unsigned long long)arg1;
- (_Bool)mf_isWhitespace;
- (_Bool)mf_isAttribution;
- (_Bool)mf_isAttributionPrefix;
- (_Bool)mf_isForwardSeparator;
- (_Bool)mf_isSignature;
- (_Bool)mf_isHorizontalSeparator;
- (id)mf_copyDisplayableAddressComment;

@end
