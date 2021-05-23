/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSCKDatabaseOperation.h>

@class NSArray;

@interface IDSCKFetchRecordsOperation : IDSCKDatabaseOperation

{
    NSArray *_recordIDs;
    NSArray *_desiredKeys;
    CDUnknownBlockType _perRecordProgressBlock;
    CDUnknownBlockType _perRecordCompletionBlock;
    CDUnknownBlockType _fetchRecordsCompletionBlock;
}

@property (copy, nonatomic) NSArray *recordIDs;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (copy, nonatomic) CDUnknownBlockType perRecordProgressBlock;
@property (copy, nonatomic) CDUnknownBlockType perRecordCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType fetchRecordsCompletionBlock;

+ (id)alloc;
+ (Class)__class;

@end
