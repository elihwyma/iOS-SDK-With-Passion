/*
 Image: /System/Library/PrivateFrameworks/FriendKit.framework/FriendKit
 */

#import <Foundation/NSObject.h>

@interface FKUtility : NSObject

+ (id)_nameFormatter;
+ (_Bool)isRomanString:(id)arg1;
+ (_Bool)shouldAllowAddingFriendWithRecordID:(int)arg1 withFriendListManager:(id)arg2 addressBook:(void *)arg3 personValueCache:(id)arg4;
+ (_Bool)personHasLinkages:(void *)arg1;
+ (id)initialsForPerson:(void *)arg1;
+ (id)initialForString:(id)arg1;
+ (id)compressPhoneNumberString:(id)arg1;
+ (id)hashFromData:(id)arg1;

@end
