/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSDictionary, NSManagedObjectID, NSNumber, NSString;

@protocol PFHistoryAnalyzerObjectState

@property (nonatomic, readonly) NSManagedObjectID *analyzedObjectID;
@property (nonatomic, readonly) NSNumber *originalTransactionNumber;
@property (nonatomic, readonly) long long originalChangeType;
@property (nonatomic, readonly) NSNumber *finalTransactionNumber;
@property (nonatomic, readonly) long long finalChangeType;
@property (nonatomic, readonly) NSDictionary *tombstone;
@property (nonatomic, readonly) NSString *finalChangeAuthor;

- (unsigned short)updateWithChange: /* Error: Ran out of types for this method. */;

@end
