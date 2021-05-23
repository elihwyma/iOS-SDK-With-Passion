/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/PFUbiquityImportOperation.h>

@class NSManagedObjectModel, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquityBaselineOperation : PFUbiquityImportOperation

{
    NSString *_modelVersionHash;
    NSManagedObjectModel *_model;
}

@property (nonatomic, readonly) NSString *modelVersionHash;
@property (nonatomic, readonly) NSManagedObjectModel *model;

- (void)dealloc;
- (id)description;
- (id)initWithPersistentStore:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3;

@end
