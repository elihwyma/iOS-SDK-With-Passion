/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSSQLiteEntity.h>

@interface SSAppPurchaseHistoryEntry : SSSQLiteEntity

+ (id)databaseTable;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (id)predicateForAccountIdentifier:(id)arg1;
+ (id)predicateForNotHidden;
+ (id)supportsPlatformPredicate:(_Bool)arg1;
+ (id)predicateForNotFirstParty;
+ (id)predicateForHasMessagesExtension;
+ (id)predicateForIs32BitOnly:(_Bool)arg1;

@end
