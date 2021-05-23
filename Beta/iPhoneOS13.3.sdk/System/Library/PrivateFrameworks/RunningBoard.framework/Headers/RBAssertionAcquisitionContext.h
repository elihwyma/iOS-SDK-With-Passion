/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class RBProcess, RBSAssertionDescriptor;

@interface RBAssertionAcquisitionContext : NSObject

{
    _Bool _allowAbstractTarget;
    _Bool _unitTesting;
    RBProcess *_process;
    RBSAssertionDescriptor *_descriptor;
    unsigned long long _acquisitionPolicy;
    id _holdToken;
}

@property (nonatomic, readonly) RBProcess *process;
@property (nonatomic, readonly) RBSAssertionDescriptor *descriptor;
@property (retain, nonatomic) id holdToken;
@property (nonatomic) _Bool unitTesting;
@property (nonatomic) _Bool allowAbstractTarget;
@property (nonatomic) unsigned long long acquisitionPolicy;

+ (id)contextForProcess:(id)arg1 withDescriptor:(id)arg2;

@end
