/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

@class CXCallDirectoryManager;

@protocol CXCallDirectoryExtensionManagerDelegate, OS_dispatch_queue;

@interface CXCallDirectoryExtensionManager : NSObject

{
    int _storeExtensionsChangedNotifyToken;
    CXCallDirectoryManager *_manager;
    NSObject<OS_dispatch_queue> *_queue;
    id <CXCallDirectoryExtensionManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id <CXCallDirectoryExtensionManagerDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, readonly) CXCallDirectoryManager *manager;
@property (nonatomic) int storeExtensionsChangedNotifyToken;

- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)extensionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_extensionsChanged;
- (void)setPrioritizedExtensionIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)beginObservingExtensions;
- (void)setEnabled:(_Bool)arg1 forExtension:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
