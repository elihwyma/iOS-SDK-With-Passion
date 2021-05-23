/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSManagedObjectID, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface PFHistoryAnalyzerDefaultObjectState : NSObject

{
    NSManagedObjectID *_analyzedObjectID;
    NSNumber *_originalTransactionNumber;
    long long _originalChangeType;
    NSNumber *_finalTransactionNumber;
    long long _finalChangeType;
    NSDictionary *_tombstone;
    NSString *_finalChangeAuthor;
}

@property (nonatomic, readonly) NSManagedObjectID *analyzedObjectID;
@property (nonatomic, readonly) NSNumber *originalTransactionNumber;
@property (nonatomic, readonly) long long originalChangeType;
@property (nonatomic, readonly) NSNumber *finalTransactionNumber;
@property (nonatomic, readonly) long long finalChangeType;
@property (nonatomic, readonly) NSDictionary *tombstone;
@property (nonatomic, readonly) NSString *finalChangeAuthor;

- (void)dealloc;
- (id)description;
- (void)updateWithChange:(id)arg1;
- (id)initWithOriginalChange:(id)arg1;

@end
