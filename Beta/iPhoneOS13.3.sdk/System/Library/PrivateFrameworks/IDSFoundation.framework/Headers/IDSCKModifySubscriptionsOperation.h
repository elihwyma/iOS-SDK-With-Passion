/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSCKDatabaseOperation.h>

@interface IDSCKModifySubscriptionsOperation : IDSCKDatabaseOperation

{
    CDUnknownBlockType _modifySubscriptionsCompletionBlock;
}

@property (copy, nonatomic) CDUnknownBlockType modifySubscriptionsCompletionBlock;

+ (id)alloc;
+ (Class)__class;

@end
