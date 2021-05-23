/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSCharacterSet.h>

@interface NSCharacterSet (MailCoreAdditions)

+ (id)ef_unsafeDomainNameCharacterSet;
+ (id)ef_unsafeAddressLocalPartCharacterSet;
+ (id)ef_asciiAlphaNumericCharacterSet;

@end
