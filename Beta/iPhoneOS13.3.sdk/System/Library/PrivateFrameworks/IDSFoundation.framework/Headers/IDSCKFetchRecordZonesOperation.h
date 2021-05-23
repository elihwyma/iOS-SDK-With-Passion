/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSCKDatabaseOperation.h>

@interface IDSCKFetchRecordZonesOperation : IDSCKDatabaseOperation

{
    CDUnknownBlockType _fetchRecordZonesCompletionBlock;
}

@property (copy, nonatomic) CDUnknownBlockType fetchRecordZonesCompletionBlock;

+ (id)alloc;
+ (Class)__class;

@end
