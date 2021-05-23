/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSArray;

@interface CKSyncEngineBatch : NSObject

{
    _Bool _atomic;
    NSArray *_recordsToSave;
    NSArray *_recordIDsToDelete;
}

@property (nonatomic, getter=isAtomic) _Bool atomic;
@property (nonatomic, readonly) NSArray *recordsToSave;
@property (nonatomic, readonly) NSArray *recordIDsToDelete;

- (id)description;
- (id)initWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;

@end
