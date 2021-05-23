/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <Foundation/NSObject.h>

@class BCCloudKitController, NSManagedObjectContext, NSString;

@interface BCCloudChangeTokenController : NSObject

{
    _Bool _enableCloudSync;
    NSManagedObjectContext *_moc;
    NSString *_zoneName;
    BCCloudKitController *_cloudKitController;
}

@property (weak, nonatomic) NSManagedObjectContext *moc;
@property (copy, nonatomic) NSString *zoneName;
@property (weak, nonatomic) BCCloudKitController *cloudKitController;
@property (nonatomic) _Bool enableCloudSync;

- (_Bool)cloudSyncEnabled;
- (void)dissociateCloudDataFromSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteCloudDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithMOC:(id)arg1 zoneName:(id)arg2 cloudKitController:(id)arg3;
- (void)serverChangeTokenWithCompletion:(CDUnknownBlockType)arg1;
- (void)storeServerChangeToken:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
