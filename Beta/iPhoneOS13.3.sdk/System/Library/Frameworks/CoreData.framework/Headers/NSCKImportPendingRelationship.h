/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSManagedObject.h>

@class NSCKImportOperation, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface NSCKImportPendingRelationship : NSManagedObject

@property (retain, nonatomic) NSString *recordName;
@property (retain, nonatomic) NSString *cdEntityName;
@property (retain, nonatomic) NSString *relatedRecordName;
@property (retain, nonatomic) NSString *relatedEntityName;
@property (retain, nonatomic) NSString *relationshipName;
@property (retain, nonatomic) NSNumber *needsDelete;
@property (retain, nonatomic) NSCKImportOperation *operation;

+ (id)entityPath;
+ (id)insertPendingRelationshipForFailedRelationship:(id)arg1 forOperation:(id)arg2 inStore:(id)arg3 withManagedObjectContext:(id)arg4;

@end
