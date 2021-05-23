/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/Swift-Protocol.h>

@class NSObject, NSString;

@protocol OS_dispatch_queue;

@protocol CKDOperationPipelining <Swift>

@property (nonatomic, readonly) NSString *pipeliningDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

@end
