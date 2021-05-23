/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Contacts/CNContactStore.h>

@interface CNContactStore (SafariSharedExtras)

+ (id)safari_sharedContactStore;

- (id)safari_contactForHandle:(id)arg1 error:(id *)arg2;

@end
