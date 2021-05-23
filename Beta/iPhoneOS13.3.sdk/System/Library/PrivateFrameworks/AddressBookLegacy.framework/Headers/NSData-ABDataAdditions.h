/*
 Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

#import <Foundation/NSData.h>

@interface NSData (ABDataAdditions)

- (id)abDecodedUTF7;
- (id)abStringAtRange:(struct _NSRange)arg1 inEncoding:(unsigned long long)arg2;
- (_Bool)abIsUTF16EntourageVCard;
- (id)abEncodeVCardBase64DataWithInitialLength:(unsigned long long)arg1;
- (id)abDecodeVCardBase64;

@end
