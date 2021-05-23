/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNDonatedMeCardPersistenceHelper : NSObject

+ (id)mutableCopyOfContact:(id)arg1 byCopyingValuesForKeysOnly:(id)arg2;
+ (id)mutableCopyOfContact:(id)arg1 byCopyingModificationsAndValuesForKeysOnly:(id)arg2;
+ (_Bool)createNewMeContact:(id)arg1 inStore:(id)arg2;
+ (id)defaultKeysForValuesToPersist;
+ (id)propertyGroupItemLog;

@end
