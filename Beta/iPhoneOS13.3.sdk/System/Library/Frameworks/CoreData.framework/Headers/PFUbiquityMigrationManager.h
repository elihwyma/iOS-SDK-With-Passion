/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectModel, NSString, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityMigrationManager : NSObject

{
    NSManagedObjectModel *_destinationModel;
    NSManagedObjectModel *_sourceModel;
    PFUbiquityLocation *_rootLocation;
    NSString *_localPeerID;
}

@property (readonly) NSManagedObjectModel *sourceModel;
@property (readonly) NSManagedObjectModel *destinationModel;
@property (readonly) PFUbiquityLocation *rootLocation;

- (void)dealloc;
- (id)initWithDestinationModel:(id)arg1 sourceModel:(id)arg2 ubiquityRootLocation:(id)arg3 localPeerID:(id)arg4;
- (id)initWithDestinationModel:(id)arg1 storeName:(id)arg2 previousModelVersionHash:(id)arg3 ubiquityRootLocation:(id)arg4 localPeerID:(id)arg5;
- (_Bool)migrateTransactionLogs:(_Bool)arg1 andBaselineIfNecessaryForStoreName:(id)arg2 peerID:(id)arg3 error:(id *)arg4;

@end
