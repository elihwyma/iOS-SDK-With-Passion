/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class PFUbiquityStoreSaveSnapshot, PFUbiquityTransactionLog;

__attribute__((visibility("hidden")))
@interface _PFUbiquityMigrationContext : NSObject

{
    PFUbiquityTransactionLog *_transactionLog;
    PFUbiquityStoreSaveSnapshot *_sourceStoreSaveSnapshot;
    PFUbiquityStoreSaveSnapshot *_destinationStoreSaveSnapshot;
}

@property (retain, nonatomic) PFUbiquityTransactionLog *transactionLog;
@property (retain, nonatomic) PFUbiquityStoreSaveSnapshot *sourceStoreSaveSnapshot;
@property (retain, nonatomic) PFUbiquityStoreSaveSnapshot *destinationStoreSaveSnapshot;

- (void)dealloc;
- (id)sourceGlobalObjectIDFromCompressedID:(id)arg1;

@end
