/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSSet, NSUUID;

__attribute__((visibility("hidden")))
@interface NSCKImportOperation : NSManagedObject

@property (retain, nonatomic) NSDate *importDate;
@property (retain, nonatomic) NSUUID *operationUUID;
@property (retain, nonatomic) NSData *changeTokenBytes;
@property (retain, nonatomic) NSSet *pendingRelationships;

+ (id)entityPath;
+ (id)fetchUnfinishedImportOperationsInStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fetchOperationWithIdentifier:(id)arg1 fromStore:(id)arg2 inManagedObjectContext:(id)arg3 error:(id *)arg4;
+ (_Bool)purgeFinishedImportOperationsInStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id *)arg3;

@end
