/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class NSObject;

@protocol OS_dispatch_queue;

@interface HAPCharacteristicEnableEventCompletionTuple : HMFObject

{
    CDUnknownBlockType _handler;
    NSObject<OS_dispatch_queue> *_completionQueue;
}

@property (copy, nonatomic) CDUnknownBlockType handler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;

+ (id)enableEventCompletionTupleWithHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;

@end
