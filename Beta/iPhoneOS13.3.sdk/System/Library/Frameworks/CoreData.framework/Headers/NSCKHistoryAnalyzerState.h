/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSManagedObject.h>

@class NSDictionary, NSManagedObjectID, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface NSCKHistoryAnalyzerState : NSManagedObject

@property (retain, nonatomic) NSNumber *entityId;
@property (retain, nonatomic) NSNumber *entityPK;
@property (retain, nonatomic) NSNumber *originalChangeTypeNum;
@property (retain, nonatomic) NSNumber *finalChangeTypeNum;
@property (nonatomic, readonly) NSManagedObjectID *analyzedObjectID;
@property (nonatomic, readonly) NSNumber *originalTransactionNumber;
@property (nonatomic, readonly) long long originalChangeType;
@property (nonatomic, readonly) NSNumber *finalTransactionNumber;
@property (nonatomic, readonly) long long finalChangeType;
@property (nonatomic, readonly) NSDictionary *tombstone;
@property (nonatomic, readonly) NSString *finalChangeAuthor;

+ (id)entityPath;
+ (id)countAnalyzerStatesInStore:(id)arg1 matchingPredicate:(id)arg2 withManagedObjectContext:(id)arg3 error:(id *)arg4;
+ (id)insertAnalyzerStateForChange:(id)arg1 inStore:(id)arg2 withManagedObjectContext:(id)arg3 error:(id *)arg4;
+ (id)fetchStateForChangedObjectID:(id)arg1 withManagedObjectContext:(id)arg2 error:(id *)arg3;
+ (_Bool)purgeAnalyzedHistoryFromStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)countAnalyzerStatesInStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id *)arg3;

- (void)updateWithChange:(id)arg1;

@end
