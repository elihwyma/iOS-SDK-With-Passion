/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATOperation.h>

@interface CRKBlockOperation : CATOperation

{
    CDUnknownBlockType _operationBlock;
}

@property (nonatomic, readonly) CDUnknownBlockType operationBlock;

+ (id)blockOperationWithBlock:(CDUnknownBlockType)arg1;

- (void)cancel;
- (void)main;
- (_Bool)isAsynchronous;
- (id)initWithOperationBlock:(CDUnknownBlockType)arg1;

@end
