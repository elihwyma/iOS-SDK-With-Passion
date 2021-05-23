/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSString, NSURL;

@protocol CRKFileBackedConfigurationSourceDelegate, OS_dispatch_queue;

@interface CRKFileBackedConfigurationSource : NSObject

{
    NSURL *mFileURL;
    NSObject<OS_dispatch_queue> *mCallbackQueue;
    NSOperationQueue *mFileOperationQueue;
    id <CRKFileBackedConfigurationSourceDelegate> _delegate;
}

@property (weak) id <CRKFileBackedConfigurationSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)directoryURL;
- (id)initWithFileURL:(id)arg1;
- (void)setConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchConfiguration:(CDUnknownBlockType)arg1;
- (id)initWithFileURL:(id)arg1 callbackQueue:(id)arg2;
- (void)invokeCompletionBlock:(CDUnknownBlockType)arg1 withError:(id)arg2;
- (_Bool)deleteConfigurationAtURL:(id)arg1 inDirectory:(id)arg2 error:(id *)arg3;
- (void)executeIntents:(id)arg1 accessBlock:(CDUnknownBlockType)arg2;
- (void)delegateDidDeleteConfigurationAtURL:(id)arg1 inDirectory:(id)arg2;
- (void)invokeCompletionBlock:(CDUnknownBlockType)arg1 withConfiguration:(id)arg2 error:(id)arg3;
- (_Bool)isReadErrorBenign:(id)arg1;

@end
