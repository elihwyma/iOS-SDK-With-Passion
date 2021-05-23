/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol OS_dispatch_queue;

@interface NEIKEv2InformationalContext : NSObject

{
    unsigned int _maxRetries;
    NSArray *_privateNotifies;
    unsigned long long _retryIntervalInMilliseconds;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CDUnknownBlockType _callback;
}

@property (retain, nonatomic) NSArray *privateNotifies;
@property (nonatomic) unsigned int maxRetries;
@property (nonatomic) unsigned long long retryIntervalInMilliseconds;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (copy, nonatomic) CDUnknownBlockType callback;

- (id)description;
- (void)sendCallbackSuccess:(_Bool)arg1 session:(id)arg2;

@end
