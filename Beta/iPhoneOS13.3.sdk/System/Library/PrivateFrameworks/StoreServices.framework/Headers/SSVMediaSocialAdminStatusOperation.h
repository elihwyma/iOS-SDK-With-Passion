/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSVComplexOperation.h>

@class NSLock;

@interface SSVMediaSocialAdminStatusOperation : SSVComplexOperation

{
    NSLock *_lock;
    CDUnknownBlockType _outputBlock;
}

@property (copy) CDUnknownBlockType outputBlock;

- (id)init;
- (void)main;

@end
