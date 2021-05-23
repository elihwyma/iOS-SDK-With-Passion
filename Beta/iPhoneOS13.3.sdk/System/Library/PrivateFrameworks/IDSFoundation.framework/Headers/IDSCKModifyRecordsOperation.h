/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSCKDatabaseOperation.h>

@interface IDSCKModifyRecordsOperation : IDSCKDatabaseOperation

{
    CDUnknownBlockType _modifyRecordsCompletionBlock;
    long long _savePolicy;
}

@property (copy, nonatomic) CDUnknownBlockType modifyRecordsCompletionBlock;
@property (nonatomic) long long savePolicy;

+ (id)alloc;
+ (Class)__class;

@end
