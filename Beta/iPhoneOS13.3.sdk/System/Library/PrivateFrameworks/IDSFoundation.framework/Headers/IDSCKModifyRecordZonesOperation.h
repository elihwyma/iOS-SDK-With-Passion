/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSCKDatabaseOperation.h>

@class NSArray;

@interface IDSCKModifyRecordZonesOperation : IDSCKDatabaseOperation

{
    NSArray *_recordZonesToSave;
    NSArray *_recordZoneIDsToDelete;
    CDUnknownBlockType _modifyRecordZonesCompletionBlock;
    long long _qualityOfService;
}

@property (copy, nonatomic) NSArray *recordZonesToSave;
@property (copy, nonatomic) NSArray *recordZoneIDsToDelete;
@property (copy, nonatomic) CDUnknownBlockType modifyRecordZonesCompletionBlock;
@property long long qualityOfService;

+ (id)alloc;
+ (Class)__class;

@end
