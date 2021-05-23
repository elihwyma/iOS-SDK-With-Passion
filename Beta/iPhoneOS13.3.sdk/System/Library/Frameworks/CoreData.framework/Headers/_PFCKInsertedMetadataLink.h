/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSCKRecordMetadata, NSManagedObject;

__attribute__((visibility("hidden")))
@interface _PFCKInsertedMetadataLink : NSObject

{
    NSCKRecordMetadata *_recordMetadata;
    NSManagedObject *_insertedObject;
}

@property (nonatomic, readonly) NSManagedObject *insertedObject;
@property (nonatomic, readonly) NSCKRecordMetadata *recordMetadata;

- (void)dealloc;
- (id)description;
- (id)initWithManagedObject:(id)arg1 andRecordMetadata:(id)arg2;

@end
