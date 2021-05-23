/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <ClassroomKit/CRKCloudOperation.h>

@class NSSet;

@interface CRKCloudModifyRecordsOperation : CRKCloudOperation

{
    _Bool _atomic;
    NSSet *_recordsToSave;
    NSSet *_recordIdsToDelete;
}

@property (nonatomic, readonly) NSSet *recordsToSave;
@property (nonatomic, readonly) NSSet *recordIdsToDelete;
@property (nonatomic, readonly, getter=isAtomic) _Bool atomic;

- (void)main;
- (id)initWithDatabase:(id)arg1;
- (id)resetOperation;
- (id)initWithDatabase:(id)arg1 recordsToSave:(id)arg2 recordIdsToDelete:(id)arg3 isAtomic:(_Bool)arg4;

@end
