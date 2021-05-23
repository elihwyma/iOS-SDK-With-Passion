/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@interface SSWishlistDatabaseSchema : NSObject

+ (void)createSchemaInDatabase:(id)arg1;
+ (id)databasePathWithAccountIdentifier:(long long)arg1;
+ (void)_migrate7000to7001InDatabase:(id)arg1;
+ (void)_migrate7001to7002InDatabase:(id)arg1;

@end
