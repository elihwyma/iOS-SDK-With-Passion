/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@interface CNEmailAddressScanner : NSObject

- (void)enumerateEmailAddressesInString:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)firstEmailAddressInString:(id)arg1;
- (void)withEmailAddressesInString:(id)arg1 each:(CDUnknownBlockType)arg2;

@end
