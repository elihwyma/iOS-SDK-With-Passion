/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface SUCore : NSObject

{
    NSString *_baseDomain;
    NSString *_filesystemBaseDir;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSObject<OS_dispatch_queue> *_delegateCallbackQueue;
    NSObject<OS_dispatch_queue> *_waitedOperationQueue;
}

@property (retain, nonatomic) NSString *baseDomain;
@property (retain, nonatomic) NSString *filesystemBaseDir;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *waitedOperationQueue;

+ (id)sharedCore;
+ (id)errorNameForCode:(long long)arg1;
+ (id)sharedSUCoreDomainAppending:(id)arg1;
+ (id)beginTransactionWithName:(id)arg1;
+ (void)endTransaction:(id)arg1 withName:(id)arg2;

- (id)init;
- (id)commonDomain;
- (id)commonFilesystemBaseDir;
- (id)buildError:(long long)arg1 underlying:(id)arg2 description:(id)arg3;
- (void)useDomain:(id)arg1;
- (void)useFilesystemBaseDir:(id)arg1;
- (id)selectCompletionQueue:(id)arg1;
- (id)selectDelegateCallbackQueue:(id)arg1;

@end
