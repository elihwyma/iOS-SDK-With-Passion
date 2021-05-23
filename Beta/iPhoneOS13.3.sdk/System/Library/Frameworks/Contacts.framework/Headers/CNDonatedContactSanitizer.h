/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNDonatedContactSanitizer : NSObject

+ (id)mutableCopyOfDonatedContact:(id)arg1 withCustomIdentifier:(id)arg2;
+ (id)storeInfoFromPredicate:(id)arg1;
+ (id)storeInfoByMergingStoreInfos:(id)arg1;
+ (void)markContactAndMultiValuesAsDonated:(id)arg1 usingStoreInfo:(id)arg2 andStoreIdentifier:(id)arg3;
+ (id)sanitizeDonatedContact:(id)arg1 matchingPredicate:(id)arg2;

@end
