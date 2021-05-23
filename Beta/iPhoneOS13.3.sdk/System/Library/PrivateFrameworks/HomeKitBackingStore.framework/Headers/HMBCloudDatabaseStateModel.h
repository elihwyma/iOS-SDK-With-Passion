/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HomeKitBackingStore/HMBCloudStateModel.h>

@class CKDatabase, HMBCloudID, NSData, NSDate, NSSet;

@interface HMBCloudDatabaseStateModel : HMBCloudStateModel

{
    CKDatabase *_database;
}

@property (retain, nonatomic) NSData *subscriptionsData;
@property (weak, nonatomic) CKDatabase *database;
@property (retain, nonatomic) HMBCloudID *cloudID;
@property (retain, nonatomic) NSDate *lastAdministrativeFetch;
@property (copy, nonatomic) NSSet *subscriptions;

+ (id)hmbProperties;

- (id)initWithModelID:(id)arg1 parentModelID:(id)arg2;

@end
