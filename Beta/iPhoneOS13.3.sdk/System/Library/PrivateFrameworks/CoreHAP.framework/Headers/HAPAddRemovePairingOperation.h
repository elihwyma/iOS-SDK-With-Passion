/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class NSData, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface HAPAddRemovePairingOperation : HMFObject

{
    _Bool _admin;
    _Bool _operationExecuting;
    long long _operation;
    NSString *_identifier;
    NSData *_publicKey;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _completionHandler;
}

@property (nonatomic) long long operation;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSData *publicKey;
@property (nonatomic) _Bool admin;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic) _Bool operationExecuting;

- (id)initWith:(long long)arg1 identifier:(id)arg2 publicKey:(id)arg3 admin:(_Bool)arg4 queue:(id)arg5 completion:(CDUnknownBlockType)arg6;

@end
