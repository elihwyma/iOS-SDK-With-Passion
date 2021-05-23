/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class NSObject, NSString;

@protocol OS_dispatch_queue;

@interface HAPBTLEReachabilityScanTuple : HMFObject

{
    CDUnknownBlockType _completion;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_identifier;
}

@property (copy, nonatomic) CDUnknownBlockType completion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *identifier;

+ (id)reachabilityScanTupleWithCompletion:(CDUnknownBlockType)arg1 workQueue:(id)arg2 identifier:(id)arg3;

@end
