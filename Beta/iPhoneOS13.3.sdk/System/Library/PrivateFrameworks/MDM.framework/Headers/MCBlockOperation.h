/*
 Image: /System/Library/PrivateFrameworks/MDM.framework/MDM
 */

#import <DeviceManagement/CATOperation.h>

@interface MCBlockOperation : CATOperation

{
    CDUnknownBlockType _block;
}

@property (copy, nonatomic) CDUnknownBlockType block;

+ (id)blockOperationWithBlock:(CDUnknownBlockType)arg1;

- (void)main;
- (_Bool)isAsynchronous;

@end
