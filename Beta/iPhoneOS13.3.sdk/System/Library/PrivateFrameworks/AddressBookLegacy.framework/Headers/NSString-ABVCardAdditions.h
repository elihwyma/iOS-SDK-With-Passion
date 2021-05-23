/*
 Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

#import <Foundation/NSString.h>

@interface NSString (ABVCardAdditions)

- (id)abStringByRemovingCharactersFromSet:(id)arg1;
- (id)abEscapeStringForUnichar:(unsigned short)arg1 and:(unsigned short)arg2 advance:(long long *)arg3;
- (id)copyABVCardDataRepresentation;
- (id)abStringByStrippingControlCharacters;
- (id)abVCardKoshify;

@end
