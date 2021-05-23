/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSCKDatabaseOperation.h>

@interface IDSCKQueryOperation : IDSCKDatabaseOperation

{
    CDUnknownBlockType _recordFetchedBlock;
    CDUnknownBlockType _completionBlock;
}

@property (copy, nonatomic) CDUnknownBlockType recordFetchedBlock;
@property (copy) CDUnknownBlockType completionBlock;

+ (id)alloc;
+ (Class)__class;

@end
