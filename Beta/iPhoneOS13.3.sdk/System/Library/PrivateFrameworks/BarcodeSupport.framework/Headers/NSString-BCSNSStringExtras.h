/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <Foundation/NSString.h>

@interface NSString (BCSNSStringExtras)

- (_Bool)_bcs_hasCaseInsensitivePrefix:(id)arg1;
- (id)_bcs_trimmedString;
- (_Bool)_bcs_looksLikeEmailAddress;
- (id)_bcs_urlEncodedQueryValue;
- (id)_bcs_unescapedString;
- (id)_bcs_stringForcingLeftToRightDirection;
- (id)_bcs_stringWithEnclosingDoubleQuotesRemoved;

@end
