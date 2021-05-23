/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@interface CKABAddressBookRef : NSObject

+ (void *)ABAddressBookFindPersonMatchingPhoneNumber:(void *)arg1:(id)arg2:(int *)arg3:(id *)arg4;
+ (void *)ABAddressBookFindPersonMatchingEmailAddress:(void *)arg1:(id)arg2:(int *)arg3;
+ (void *)ABAddressBookFindPersonMatchingURL:(void *)arg1:(id)arg2:(int *)arg3;
+ (void *)ABAddressBookGetPersonWithRecordID:(void *)arg1:(int)arg2;

@end
